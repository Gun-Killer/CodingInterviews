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
    public sealed class ModePaymentWindowViewModel : ViewModelBase
    {
        public ModePaymentWindowViewModel()
        {
            _modePaymentInfo = new ModePaymentInfoViewModel();
        }

        private ModePaymentInfoViewModel _modePaymentInfo;

        public ModePaymentInfoViewModel ModePaymentInfo
        {
            get => _modePaymentInfo;
            set
            {
                _modePaymentInfo = value;
                OnPropertyChanged(nameof(ModePaymentInfo));
            }
        }
    }


    public sealed class ModePaymentInfoViewModel : ViewModelBase
    {
        private string _modePaymentBtnName = "添加";
        private ModePaymentItem _seleted;
        private string _modePaymentName;
        private NotifyTaskCompletion<ObservableCollection<ModePaymentItem>> _items;


        public ModePaymentInfoViewModel()
        {
            Items = new NotifyTaskCompletion<ObservableCollection<ModePaymentItem>>(GetItems());
            SyncModePaymentCommand = new ModePaymentCommand();
        }

        public string ModePaymentBtnName
        {
            get => _modePaymentBtnName;
            set
            {
                _modePaymentBtnName = value;
                OnPropertyChanged(nameof(ModePaymentBtnName));
            }
        }

        public string ModePaymentName
        {
            get => _modePaymentName;
            set
            {
                _modePaymentName = value;
                OnPropertyChanged(nameof(ModePaymentName));
            }
        }



        public ModePaymentCommand SyncModePaymentCommand { get; set; }

        public ModePaymentItem Seleted
        {
            get => _seleted;
            set
            {
                _seleted = value;
                if (_seleted == null)
                {
                    ModePaymentBtnName = "添加";
                    ModePaymentName = "";
                }
                else
                {
                    ModePaymentBtnName = "更新";
                    ModePaymentName = value.Name;
                }
            }
        }

        public NotifyTaskCompletion<ObservableCollection<ModePaymentItem>> Items
        {
            get => _items;
            set
            {
                _items = value;
                OnPropertyChanged(nameof(Items));
            }
        }


        private async Task<ObservableCollection<ModePaymentItem>> GetItems()
        {
            var modePaymentRepository = AccountServiceProvider.Instance.GetService<IModeOfPaymentModelRepository>();

            return new ObservableCollection<ModePaymentItem>((await modePaymentRepository.GetAllAsync())
                .Select(t => new ModePaymentItem()
                {
                    Id = t.Id,
                    Name = t.Name,
                }));

        }


        public void Refresh()
        {
            Seleted = null;
            ModePaymentName = null;
            Items = new NotifyTaskCompletion<ObservableCollection<ModePaymentItem>>(GetItems());
        }
    }
    public sealed class ModePaymentItem
    {
        public long Id { get; set; }
        public string Name { get; set; }
    }
}
