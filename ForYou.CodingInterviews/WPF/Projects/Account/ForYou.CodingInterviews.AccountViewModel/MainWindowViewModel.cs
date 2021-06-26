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
    public class MainWindowViewModel
    {
        public MainWindowViewModel()
        {
            Amount = 0m;

            Users = new NotifyTaskCompletion<ObservableCollection<UserItem>>(
                 GetUsers()
                );

            AddCommand = new AddNewRecordAsyncCommand();
        }
        public decimal Amount { get; set; }

        public NotifyTaskCompletion<ObservableCollection<UserItem>> Users { get; set; }

        private async Task<ObservableCollection<UserItem>> GetUsers()
        {
            IUserModelRepository? userRepository = AccountServiceProvider.Instance.GetService<IUserModelRepository>();
            return new ObservableCollection<UserItem>((await userRepository.GetAllAsync()).Select(t => new UserItem
            {
                Id = t.Id,
                Name = t.Name
            }));
        }

        public UserItem SelectedUser { get; set; }


        public AddNewRecordAsyncCommand AddCommand { get; set; }
    }
}
