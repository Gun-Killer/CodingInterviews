using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;
using ForYou.CodingInterviews.Extension;

namespace ForYou.CodingInterviews.AccountViewModel.Commands
{
    public sealed class RecordDetailCommand : AsyncCommandBase
    {
        public RecordDetailCommand()
        {
            _async_func = SyncRecord;
        }

        private async Task SyncRecord(object? parameter)
        {
            var model = parameter as RecordDetailViewModel;

            var recordModelRepository = AccountServiceProvider.Instance.GetService<IRecordModelRepository>();
            var accountAmountRepository = AccountServiceProvider.Instance.GetService<IRecordAccountAmountModelRepository>();

            RecordModel record = new RecordModel
            {
                Amount = model.PayAccounControlSource.Sum(t => t.AmountBefore - t.AmountAfter),
                RecordTime = model.RecordTime,
                Remark = model.Remark,
                CategoryId = (model.SelectedCategory ?? model.SelectedCategoryChild).Id,
                BookId = 1L,
            };
            await recordModelRepository.AddAsync(record);
            var amounts = model.PayAccounControlSource.Select(t => new RecordAccountAmountModel
            {
                ModeOfPaymentId = t.SelectedMode.Id,
                AccountPaymentId = t.SelectedAccount?.Id ?? 0L,
                AmountAfter = t.AmountAfter,
                AmountBefore = t.AmountBefore,
                RecordId = record.Id,
                Discounts = t.AmountBefore - t.AmountAfter

            }).ToList();
            await accountAmountRepository.AddRangeAsync(amounts);
            await accountAmountRepository.SaveAsync();
            model.Refresh();
        }

        public override bool CanExecute(object? parameter)
        {
            return base.CanExecute(parameter)
                && parameter is RecordDetailViewModel model
                && model.PayAccounControlSource.All(t => t.SelectedMode.NotNull() && t.AmountBefore >= t.AmountAfter)
                && model.SelectedCategory != null;
        }
    }
}
