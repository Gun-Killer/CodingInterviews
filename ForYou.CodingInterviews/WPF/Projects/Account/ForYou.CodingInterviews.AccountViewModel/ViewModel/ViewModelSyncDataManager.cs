using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class ViewModelSyncDataManager
    {
        private static Dictionary<Type, ViewModelBase> _viewModelsDic = new Dictionary<Type, ViewModelBase>();

        public static void AddViewModel(ViewModelBase viewModel)
        {
            if(viewModel== null)
            {
                return;
            }
            _viewModelsDic[viewModel.GetType()] = viewModel;
        }

        public static T GetViewModel<T>()
            where T: ViewModelBase
        {
            return (T)_viewModelsDic[typeof(T)];
        }
    }
}
