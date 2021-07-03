using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;

namespace ForYou.CodingInterviews.AccountViewModel.Commands
{
    public sealed class ModePaymentBindingAccountCommand : AsyncCommandBase
    {
        public ModePaymentBindingAccountCommand()
        {
            _async_func = BindingAccount;
        }
        private async Task BindingAccount(object? parameter)
        {
            var model = parameter as AccountPaymentItem;
            if (model == null)
            {
                return;
            }

            var main_model = ViewModelSyncDataManager.GetViewModel<ModePaymentWindowViewModel>();
            if (main_model == null || main_model.ModePaymentInfo.Seleted == null)
            {
                return;
            }

            var repository = AccountServiceProvider.Instance.GetService<IModePaymentWithAccountModelRepository>();
            var db_models = await repository.GetByModeAccountIdsAsync(new[] { main_model.ModePaymentInfo.Seleted.Id },
                new[] { model.Id }
                 );
            if (db_models.Count > 0)
            {
                await repository.DeleteRangeAsync(db_models);
                model.BtnName = "绑定";
            }
            else
            {
                db_models.Add(new ModePaymentWithAccountModel
                {
                    ModeId = main_model.ModePaymentInfo.Seleted.Id,
                    AccountId = model.Id
                });
                await repository.AddRangeAsync(db_models);
                model.BtnName = "解绑";
            }
            await repository.SaveAsync();
            await main_model.UpdateModeBindingShow();
        }
        public override bool CanExecute(object? parameter)
        {
            return base.CanExecute(parameter)
                && parameter is AccountPaymentItem
                && parameter != null
                && ViewModelSyncDataManager
                .GetViewModel<ModePaymentWindowViewModel>()
                ?.ModePaymentInfo
                ?.Seleted != null;
        }
    }
}
