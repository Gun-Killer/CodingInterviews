using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountViewModel.Commands
{
    public sealed class RecordDetailControlCommand : AsyncCommandBase
    {

        public RecordDetailControlCommand()
        {
            _async_func = Sync;
        }

        private async Task Sync(object? parameter)
        {
            var model = parameter as RecordDetailViewModel;
            model.PayAccounControlSource.Add(new AccountPaymentControlSourceItem());
        }
    }
}
