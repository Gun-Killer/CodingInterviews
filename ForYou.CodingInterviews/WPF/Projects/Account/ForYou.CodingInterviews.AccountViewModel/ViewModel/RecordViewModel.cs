using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class RecordViewModel : ViewModelBase
    {
        public RecordViewModel()
        {
            Records = new NotifyTaskCompletion<ObservableCollection<RecordItem>>(GetRecords());
        }

        public NotifyTaskCompletion<ObservableCollection<RecordItem>> Records { get; set; }

        private async Task<ObservableCollection<RecordItem>> GetRecords()
        {
            var recordRepository = AccountServiceProvider.Instance.GetService<IRecordModelRepository>();
            return new ObservableCollection<RecordItem>((await recordRepository.GetByPageAsync(0, 50)).Select(t => new RecordItem
            {
                Amount = t.Amount,
                CategoryName = t.CategoryId.ToString(),
                Id = t.Id,
                RecordTime = t.RecordTime,
                UserName = string.Empty
            }));
        }
    }
}
