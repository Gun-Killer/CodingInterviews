using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountViewModel.Commands
{
    public sealed class RecordRefreshCommand : AsyncCommandBase
    {
        private bool _next = false;
        public RecordRefreshCommand(bool next)
        {
            _next = next;
            _async_func = Sync;
        }

        private async Task Sync(object? parameter)
        {
            var model = parameter as MainWindowViewModel;
            if (_next)
            {
                if (model.Records.Records.Result.Count >= model.Records.PageSize)
                {
                    model.Records.Page++;
                    model.Records.SyncNewRecord();
                }
            }
            else
            {
                if (model.Records.Page > 0)
                {
                    model.Records.Page--;
                    model.Records.SyncNewRecord();
                }
            }
        }
        public override bool CanExecute(object? parameter)
        {
            return base.CanExecute(parameter);
        }
    }
}
