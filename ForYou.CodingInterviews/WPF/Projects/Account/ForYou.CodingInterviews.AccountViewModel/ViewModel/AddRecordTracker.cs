using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class AddRecordTracker : IObservable<MainWindowViewModel>
    {
        public AddRecordTracker()
        {
            Subscribe(new AddRecordObserver());
        }
        List<IObserver<MainWindowViewModel>> _observers = new List<IObserver<MainWindowViewModel>>();
        public IDisposable Subscribe(IObserver<MainWindowViewModel> observer)
        {
            _observers.Add(observer);
            return new UnSubscribeTracker(_observers, observer);
        }

        private class UnSubscribeTracker : IDisposable
        {
            List<IObserver<MainWindowViewModel>> _observers;
            IObserver<MainWindowViewModel> _observer;
            public UnSubscribeTracker(List<IObserver<MainWindowViewModel>> observers, IObserver<MainWindowViewModel> observer)
            {
                _observers = observers;
                _observer = observer;
            }
            public void Dispose()
            {
                _observers.Remove(_observer);
            }
        }

        public void Notice(MainWindowViewModel model)
        {
            foreach(var observer in _observers)
            {
                observer.OnNext(model);
                observer.OnCompleted();
            }
        }
    }
}
