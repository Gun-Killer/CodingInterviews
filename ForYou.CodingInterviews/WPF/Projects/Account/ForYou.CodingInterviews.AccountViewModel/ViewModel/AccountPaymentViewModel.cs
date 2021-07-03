using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;
using ForYou.CodingInterviews.AccountViewModel.Commands;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class AccountPaymentViewModel : ViewModelBase
    {
        public AccountPaymentViewModel()
        {
            SyncAccountPaymentCommand = new AccountPaymentCommand();
            BindingAccountCommand = new ModePaymentBindingAccountCommand();
            Refresh();
        }
        private string _accountPaymentBtnName = "添加";
        private string _accountPaymentName;
        private NotifyTaskCompletion<ObservableCollection<AccountPaymentItem>> _items;
        private AccountPaymentItem _selected;

        public string AccountPaymentBtnName
        {
            get => _accountPaymentBtnName;
            set
            {
                _accountPaymentBtnName = value;

                OnPropertyChanged(nameof(AccountPaymentBtnName));
            }
        }


        public string? AccountPaymentName
        {
            get => _accountPaymentName;
            set
            {
                _accountPaymentName = value;
                OnPropertyChanged(nameof(AccountPaymentName));
            }
        }

        public AccountPaymentItem? Selected
        {
            get => _selected;
            set
            {
                _selected = value;
                if (value == null)
                {
                    AccountPaymentBtnName = "添加";
                    AccountPaymentName = null;
                }
                else
                {
                    AccountPaymentBtnName = "更新";
                    AccountPaymentName = value.Name;
                }
                OnPropertyChanged(nameof(Selected));
            }
        }

        public NotifyTaskCompletion<ObservableCollection<AccountPaymentItem>> Items
        {
            get => _items;
            set
            {
                _items = value;
                OnPropertyChanged(nameof(Items));
            }
        }

        public AccountPaymentCommand SyncAccountPaymentCommand { get; set; }


        public ModePaymentBindingAccountCommand BindingAccountCommand { get; set; }


        public void Refresh()
        {
            Items = new NotifyTaskCompletion<ObservableCollection<AccountPaymentItem>>(GetItems());
            AccountPaymentBtnName = "添加";
            AccountPaymentName = null;
            Selected = null;
        }

        private async Task<ObservableCollection<AccountPaymentItem>> GetItems()
        {
            var repository = AccountServiceProvider.Instance.GetService<IAccountPaymentModelRepository>();
            return new ObservableCollection<AccountPaymentItem>((await repository.GetAllAsync())
                .Select(t => new AccountPaymentItem
                {
                    Id = t.Id,
                    Name = t.Name,
                    Balance = t.Balance
                }));
        }
    }


    public sealed class AccountPaymentItem : ViewModelBase
    {
        private string btnName = "绑定";

        public long Id { get; set; }

        public string Name { get; set; }

        public decimal Balance { get; set; }

        public string BtnName
        {
            get => btnName;
            set
            {
                btnName = value;
                OnPropertyChanged(BtnName);
            }
        }
    }
}
