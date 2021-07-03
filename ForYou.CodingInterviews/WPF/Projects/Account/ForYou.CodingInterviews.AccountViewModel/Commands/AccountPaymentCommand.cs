using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;

namespace ForYou.CodingInterviews.AccountViewModel.Commands
{
    public sealed class AccountPaymentCommand : AsyncCommandBase
    {
        public AccountPaymentCommand()
        {
            _async_func = SyncAccountPayment;
        }

        private async Task SyncAccountPayment(object? parameter)
        {
            var model = parameter as ModePaymentWindowViewModel;
            var repository = AccountServiceProvider.Instance.GetService<IAccountPaymentModelRepository>();
            AccountPaymentModel? db_model;
            if (model.AccountPaymentInfo.Selected == null)
            {
                db_model = new AccountPaymentModel
                {
                    Name = model.AccountPaymentInfo.AccountPaymentName
                };
                await repository.AddAsync(db_model);
            }
            else
            {
                db_model = await repository.GetByIdAsync(model.AccountPaymentInfo.Selected.Id);
                if(db_model == null)
                {
                    return;
                }
                db_model.Name = model.AccountPaymentInfo.AccountPaymentName;
            }

            await repository.SaveAsync();

            model.AccountPaymentInfo.Refresh();
        }

        public override bool CanExecute(object? parameter)
        {
            return base.CanExecute(parameter)
                && parameter is ModePaymentWindowViewModel model
                && string.IsNullOrWhiteSpace(model.AccountPaymentInfo?.AccountPaymentName) == false;
        }
    }
}
