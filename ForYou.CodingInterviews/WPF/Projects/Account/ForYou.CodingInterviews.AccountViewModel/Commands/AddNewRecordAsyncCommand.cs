using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;

namespace ForYou.CodingInterviews.AccountViewModel.Commands
{
    public sealed class AddNewRecordAsyncCommand : AsyncCommandBase
    {

        public AddNewRecordAsyncCommand()
        {
            _async_func = AddRecord;
        }

        private async Task AddRecord(object? record)
        {
            var model = record as MainWindowViewModel;
            if (model == null)
            {
                return;
            }
            var recordRepository = AccountServiceProvider.Instance.GetService<IRecordModelRepository>();
            var recordUserRepository = AccountServiceProvider.Instance.GetService<IRecordUserModelRepository>();

            var time_now = DateTime.Now;
            var addRecord = new RecordModel
            {
                Amount = model.Amount,
                CategoryId = 1L,
                BookId = 1L,
                CreatedById = model.SeletedCategory.Id,
                RecordTime = model.RecordTime.AddHours(time_now.Hour).AddMinutes(time_now.Minute).AddSeconds(time_now.Second),
                UpdatedById = 1L,
                CreatedBy = "admin",
                UpdatedBy = "admin",
                Remark = model.Remark ?? string.Empty
            };
            await recordRepository.AddAsync(addRecord);

            await recordUserRepository.AddRangeAsync(new[]
            {
                new  RecordUserModel
                {
                    UserId = model.SelectedUser.Id,
                    RecordId = addRecord.Id,
                    UserName = model.SelectedUser.Name,
                    CreatedById = 1L,
                    UpdatedById = 1L,
                    CreatedBy = "admin",
                    UpdatedBy = "admin"
                }

            });

            await recordRepository.SaveAsync();

            model.Reset();
        }

        public override bool CanExecute(object? parameter)
        {
            return parameter != null
                && (parameter is MainWindowViewModel model)
                && model.SelectedUser != null
                && model.Amount > 0M
                && Math.Round(model.Amount, 2) == model.Amount
                && model.SeletedCategory != null
                && base.CanExecute(parameter);
        }
    }
}
