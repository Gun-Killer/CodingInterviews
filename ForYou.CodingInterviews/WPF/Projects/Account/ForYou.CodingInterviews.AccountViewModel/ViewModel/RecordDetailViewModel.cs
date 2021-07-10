using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;
using ForYou.CodingInterviews.AccountViewModel.Commands;
using ForYou.CodingInterviews.Extension;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class RecordDetailViewModel : ViewModelBase
    {
        private string _remark;
        private NotifyTaskCompletion<ObservableCollection<CategoryItem>> _categories;
        private CategoryItem _selectedCategory;
        private CategoryItem _selectedCategoryChild;
        private long _recordId;
        private NotifyTaskCompletion<ObservableCollection<ModePaymentForRecordItem>> _modePayments;
        private ObservableCollection<AccountPaymentControlSourceItem> payAccounControlSource;
        private DateTime recordTime;

        public RecordDetailViewModel()
        {
            Categories = new NotifyTaskCompletion<ObservableCollection<CategoryItem>>(GetCategories());
            ModePayments = new NotifyTaskCompletion<ObservableCollection<ModePaymentForRecordItem>>(GetModePayments());
            PayAccounControlSource = new ObservableCollection<AccountPaymentControlSourceItem>();
            PayAccounControlSource.Add(new AccountPaymentControlSourceItem());
            AddRecordCommand = new RecordDetailCommand();
            ControlItemSourceCommand = new RecordDetailControlCommand();
            RecordTime = DateTime.Now;
            ViewModelSyncDataManager.AddViewModel(this);
        }

        public long RecordId
        {
            get => _recordId;
            set
            {
                _recordId = value;
                OnPropertyChanged(nameof(RecordId));
            }
        }

        public DateTime RecordTime
        {
            get => recordTime;
            set
            {
                recordTime = value;
                OnPropertyChanged(nameof(RecordTime));
            }
        }

        public string Remark
        {
            get => _remark;
            set
            {
                _remark = value;
                OnPropertyChanged(nameof(Remark));
            }
        }


        public ObservableCollection<AccountPaymentControlSourceItem> PayAccounControlSource
        {
            get => payAccounControlSource;
            set
            {
                payAccounControlSource = value;
                OnPropertyChanged(nameof(PayAccounControlSource));
            }
        }

        #region accountPayment

        public NotifyTaskCompletion<ObservableCollection<ModePaymentForRecordItem>> ModePayments
        {
            get => _modePayments;
            set
            {
                _modePayments = value;
                OnPropertyChanged(nameof(ModePayments));
            }
        }


        private async Task<ObservableCollection<ModePaymentForRecordItem>> GetModePayments()
        {
            var modePaymentRepository = AccountServiceProvider.Instance.GetService<IModeOfPaymentModelRepository>();
            var accountPaymentRepository = AccountServiceProvider.Instance.GetService<IAccountPaymentModelRepository>();
            var modePaymentAccountRepository = AccountServiceProvider.Instance.GetService<IModePaymentWithAccountModelRepository>();

            var modePayments = await modePaymentRepository.GetAllAsync();
            var accountPayments = (await accountPaymentRepository.GetAllAsync())
                .Select(t => new AccountPaymentFormRecordItem
                {
                    Id = t.Id,
                    Name = t.Name
                })
                .ToArray();
            var modePaymentAccounts = await modePaymentAccountRepository.GetAllAsync();
            var modePaymentAccountDic = modePaymentAccounts.GroupBy(t => t.ModeId)
                 .ToDictionary(t => t.Key, t => t.Select(k => k.AccountId).ToArray());


            ObservableCollection<ModePaymentForRecordItem> res = new ObservableCollection<ModePaymentForRecordItem>();
            foreach (var mode in modePayments)
            {
                var accountIds = modePaymentAccountDic.TryGet(mode.Id).EmptyIfNull().ToHashSet();

                ModePaymentForRecordItem modeItem = new ModePaymentForRecordItem
                {
                    Id = mode.Id,
                    Name = mode.Name,
                    Accounts = accountPayments.Where(t => accountIds.Contains(t.Id)).ToList()
                };

                res.Add(modeItem);
            }

            return res;
        }

        #endregion accountPayment

        #region category
        public CategoryItem SelectedCategory
        {
            get => _selectedCategory;
            set
            {
                _selectedCategory = value;
                OnPropertyChanged(nameof(SelectedCategory));
            }
        }

        public CategoryItem SelectedCategoryChild
        {
            get => _selectedCategoryChild;
            set
            {
                _selectedCategoryChild = value;
                OnPropertyChanged(nameof(SelectedCategoryChild));
            }
        }

        public NotifyTaskCompletion<ObservableCollection<CategoryItem>> Categories
        {
            get => _categories;

            set
            {
                _categories = value;
                OnPropertyChanged(nameof(Categories));
            }
        }


        private async Task<ObservableCollection<CategoryItem>> GetCategories()
        {
            var categoryRepository = AccountServiceProvider.Instance.GetService<ICategoryModelRepository>();
            var categories = await categoryRepository.GetAllAsync();
            var child_dic = categories.Where(t => t.ParentId > 0)
                .GroupBy(t => t.ParentId)
                .ToDictionary(t => t.Key, t => t.ToArray());
            ObservableCollection<CategoryItem> res = new ObservableCollection<CategoryItem>();

            foreach (var item in categories.Where(t => t.ParentId < 1))
            {
                CategoryItem category = new CategoryItem
                {
                    ParentId = item.ParentId,
                    Id = item.Id,
                    Name = item.Name,
                    Children = new ObservableCollection<CategoryItem>((child_dic.TryGet(item.Id)?
                    .Select(t => new CategoryItem
                    {
                        Id = t.Id,
                        Name = t.Name,
                        ParentId = t.ParentId
                    })
                    ).EmptyIfNull())
                };

                res.Add(category);
            }

            return res;
        }
        #endregion category

        #region command
        public RecordDetailCommand AddRecordCommand { get; set; }


        public RecordDetailControlCommand ControlItemSourceCommand { get; set; }
        #endregion command


        public void Refresh()
        {
            RecordTime = DateTime.Now;
            PayAccounControlSource = new ObservableCollection<AccountPaymentControlSourceItem>();
            PayAccounControlSource.Add(new AccountPaymentControlSourceItem());
            Remark = string.Empty;
            SelectedCategory = null;
            SelectedCategoryChild = null;
            RecordId = 0L;
        }
    }




    public sealed class ModePaymentForRecordItem
    {
        public long Id { get; set; }

        public string Name { get; set; }

        public List<AccountPaymentFormRecordItem> Accounts { get; set; }
    }

    public sealed class AccountPaymentFormRecordItem
    {
        public long Id { get; set; }

        public string Name { get; set; }
    }


    public sealed class AccountPaymentControlSourceItem : ViewModelBase
    {
        private decimal amountBefore;
        private decimal amountAfter;
        private decimal discounts;
        private ModePaymentForRecordItem selectedMode;

        public ModePaymentForRecordItem SelectedMode
        {
            get => selectedMode;
            set
            {
                selectedMode = value;
                OnPropertyChanged(nameof(SelectedMode));
            }
        }

        public AccountPaymentFormRecordItem SelectedAccount { get; set; }

        public decimal AmountBefore
        {
            get => amountBefore;
            set
            {
                amountBefore = value;
                discounts = amountBefore - amountAfter;
                OnPropertyChanged(nameof(AmountBefore));
                OnPropertyChanged(nameof(Discounts));
            }
        }
        public decimal AmountAfter
        {
            get => amountAfter;
            set
            {
                amountAfter = value;
                discounts = amountBefore - amountAfter;
                OnPropertyChanged(nameof(AmountAfter));
                OnPropertyChanged(nameof(Discounts));
            }
        }
        public decimal Discounts
        {
            get => discounts;
            set
            {
                discounts = value;
                amountAfter = amountBefore - discounts;
                OnPropertyChanged(nameof(AmountAfter));
                OnPropertyChanged(nameof(Discounts));
            }
        }


        public bool NotError()
        {
            return SelectedMode.NotNull() && ((AmountBefore >= 0 && AmountBefore >= AmountAfter) || (AmountBefore < 0M && AmountBefore <= AmountAfter));
        }
    }
}