using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;

namespace ForYou.CodingInterviews.AccountViewModel.Commands
{
    public sealed class ModePaymentCommand : AsyncCommandBase
    {
        public ModePaymentCommand()
        {
            _async_func = SyncModePayment;
        }
        private async Task SyncModePayment(Object? parameter)
        {
            var model = parameter as ModePaymentWindowViewModel;
            if (model == null)
            {
                return;
            }
            ModeOfPaymentModel? db_model;
            var modePaymentRepository = AccountServiceProvider.Instance.GetService<IModeOfPaymentModelRepository>();
            if (model.ModePaymentInfo.Seleted == null) // 新增
            {
                db_model = new ModeOfPaymentModel
                {
                    Name = model.ModePaymentInfo.ModePaymentName,
                };
                await modePaymentRepository.AddAsync(db_model);
            }
            else
            {
                db_model = await modePaymentRepository.GetByIdAsync(model.ModePaymentInfo.Seleted.Id);
                if(db_model== null)
                {
                    return;
                }
                db_model.Name = model.ModePaymentInfo.ModePaymentName;
            }
            await modePaymentRepository.SaveAsync();
            model.ModePaymentInfo.Refresh();
        }

        public override bool CanExecute(object? parameter)
        {

            return base.CanExecute(parameter)
                && parameter != null
                && (parameter is ModePaymentWindowViewModel model)
                && string.IsNullOrWhiteSpace(model.ModePaymentInfo?.ModePaymentName) == false
                  ;
        }
    }
}
