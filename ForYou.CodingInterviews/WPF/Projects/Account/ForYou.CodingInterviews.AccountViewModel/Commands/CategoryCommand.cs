using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;
using ForYou.CodingInterviews.Extension;

namespace ForYou.CodingInterviews.AccountViewModel.Commands
{
    public sealed class CategoryCommand : AsyncCommandBase
    {
        public CategoryCommand()
        {
            _async_func = SyncCategory;
        }
        private async Task SyncCategory(object? parameter)
        {
            var model = parameter as CategoryWindowViewModel;
            if(model.IsNull())
            {
                return;
            }
            var repository = AccountServiceProvider.Instance.GetService<ICategoryModelRepository>();
            var selected_caegory = model.ChildSelectd ?? model.ParentSelectd;
            if(selected_caegory.IsNull())//add
            {
                await repository.AddAsync(new CategoryModel
                {
                    ParentId = model.Parent?.Id ?? 0L,
                    Name = model.Name
                });
            }
            else
            {
                var category = await repository.GetByIdAsync(selected_caegory.Id);
                category.Name = model.Name;
            }
            await repository.SaveAsync();
            model.Refresh();
        }
        public override bool CanExecute(object? parameter)
        {
            return base.CanExecute(parameter)
                && parameter is CategoryWindowViewModel model
                && model.Name.NotNullAndEmpty();
        }
    }
}
