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
            if (model == null ||
                model.SelectedUser == null
                || model.Amount <= 0
                || Math.Round(model.Amount, 2) != model.Amount)
            {
                return;
            }
            var recordRepository = AccountServiceProvider.Instance.GetService<IRecordModelRepository>();
            var recordUserRepository = AccountServiceProvider.Instance.GetService<IRecordUserModelRepository>();

            var addRecord = new RecordModel
            {
                Amount = model.Amount,
                CategoryId = 1L,
                BookId = 1L,
                CreatedById = 1L,
                RecordTime = DateTime.Now,
                UpdatedById = 1L,
                CreatedBy = "阿甘",
                UpdatedBy = "阿甘",
                Remark = "Account"
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
                    CreatedBy = "阿甘",
                    UpdatedBy = "阿甘"
                }

            });

            await recordRepository.SaveAsync();
        }

        public override bool CanExecute(object? parameter)
        {
            return parameter != null
                && (parameter is MainWindowViewModel model)

                && base.CanExecute(parameter);
        }
    }
}
