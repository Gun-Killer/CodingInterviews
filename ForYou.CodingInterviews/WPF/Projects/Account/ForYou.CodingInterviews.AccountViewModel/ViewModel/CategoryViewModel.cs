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
    public sealed class CategoryViewModel : ViewModelBase
    {
        public CategoryViewModel()
        {

            Categories = new NotifyTaskCompletion<ObservableCollection<CategoryItem>>(GetCategories());
            ViewModelSyncDataManager.AddViewModel(this);
        }
        public NotifyTaskCompletion<ObservableCollection<CategoryItem>> Categories { get; set; }


        private async Task<ObservableCollection<CategoryItem>> GetCategories()
        {
            var categoryRepository = AccountServiceProvider.Instance.GetService<ICategoryModelRepository>();
            return new ObservableCollection<CategoryItem>((await categoryRepository.GetAllAsync())
                .Select(t => new CategoryItem
                {
                    Id = t.Id,
                    Name = t.Name

                }));
        }
    }
}
