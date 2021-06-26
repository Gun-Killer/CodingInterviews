using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;

namespace ForYou.CodingInterviews.AccountViewModel.Commands
{
    public abstract class AsyncCommandBase : IAsyncCommand
    {
        protected Func<object?, Task>? _async_func;

        //public AsyncCommandBase(Func<object?, Task> func)
        //{
        //    _async_func = func;
        //}

        public virtual bool CanExecute(object? parameter)
        {
            return _async_func != null;
        }

        public Task ExecuteAsync(object? parameter)
        {
            if (_async_func == null)
            {
                return Task.CompletedTask;
            }
            return _async_func(parameter);
        }

        public async void Execute(object? parameter)
        {
            await ExecuteAsync(parameter);
        }
        public event EventHandler? CanExecuteChanged
        {
            add
            {
                if (value == null)
                {
                    return;
                }
                CommandManager.RequerySuggested += value;
            }
            remove { CommandManager.RequerySuggested -= value; }
        }
        protected void RaiseCanExecuteChanged()
        {
            CommandManager.InvalidateRequerySuggested();
        }
    }
}
