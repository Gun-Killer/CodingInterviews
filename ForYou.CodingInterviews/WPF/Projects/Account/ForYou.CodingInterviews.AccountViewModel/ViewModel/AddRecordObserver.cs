using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class AddRecordObserver : IObserver<MainWindowViewModel>
    {
        public void OnCompleted()
        {
            ViewModelSyncDataManager.GetViewModel<RecordViewModel>().SyncNewRecord();
        }

        public void OnError(Exception error)
        {

        }

        public void OnNext(MainWindowViewModel value)
        {

        }
    }
}
