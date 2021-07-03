using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;
using ForYou.CodingInterviews.AccountViewModel.Commands;
using ForYou.CodingInterviews.Extension;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class CategoryWindowViewModel : ViewModelBase
    {

        public CategoryWindowViewModel()
        {
            SyncCategoryCommand = new CategoryCommand();
            Refresh();
        }
        private NotifyTaskCompletion<ObservableCollection<CategoryItem>> _items;
        private CategoryItem _parent;
        private string _name;
        private CategoryItem parentSelectd;
        private CategoryItem childSelectd;
        private string btnName;

        public string BtnName
        {
            get => btnName;
            set
            {
                btnName = value;
                OnPropertyChanged(nameof(BtnName));
            }
        }

        public string Name
        {
            get => _name;
            set
            {
                _name = value;
                OnPropertyChanged(nameof(Name));
            }
        }


        public CategoryItem Parent
        {
            get => _parent;
            set
            {
               
                if (value.NotNull() && ParentSelectd.NotNull() && ChildSelectd.IsNull())
                {
                    if (value.Id == ParentSelectd.Id)
                    {
                        _parent = null;
                        OnPropertyChanged(nameof(Parent));
                        return;
                    }
                }
                _parent = value;
                OnPropertyChanged(nameof(Parent));
            }
        }


        public NotifyTaskCompletion<ObservableCollection<CategoryItem>> Items
        {
            get => _items;
            set
            {
                _items = value;
                OnPropertyChanged(nameof(Items));
            }
        }


        public CategoryItem ParentSelectd
        {
            get => parentSelectd;
            set
            {
                parentSelectd = value;
                if (ChildSelectd == null)
                {
                    if (value == null)
                    {
                        BtnName = "添加";
                    }
                    else
                    {
                        Name = value.Name;
                        BtnName = "更新";
                    }
                }
                Parent = null;
                OnPropertyChanged(nameof(ParentSelectd));
            }
        }

        public CategoryItem ChildSelectd
        {
            get => childSelectd;
            set
            {
                childSelectd = value;
                Parent = ParentSelectd;
                if (value == null)
                {
                    BtnName = "添加";
                }
                else
                {
                    Name = value.Name;
                    BtnName = "更新";
                }
                OnPropertyChanged(nameof(ChildSelectd));
            }
        }


        #region command
        public CategoryCommand SyncCategoryCommand { get; set; }
        #endregion command


        public void Refresh()
        {
            ParentSelectd = null;
            ChildSelectd = null;
            Name = null;
            Items = new NotifyTaskCompletion<ObservableCollection<CategoryItem>>(GetCategories());
        }

        private async Task<ObservableCollection<CategoryItem>> GetCategories()
        {
            var repository = AccountServiceProvider.Instance.GetService<ICategoryModelRepository>();
            var categories = await repository.GetAllAsync();
            var child_dic = categories.Where(t => t.ParentId > 0)
                .GroupBy(t => t.ParentId)
                .ToDictionary(t => t.Key, t => t.ToArray());
            ObservableCollection<CategoryItem> res = new ObservableCollection<CategoryItem>();

            foreach (var item in categories.Where(t => t.ParentId < 1))
            {
                CategoryItem category = new CategoryItem
                {
                    ParentId = item.ParentId,
                    Id = item.Id,
                    Name = item.Name,
                    Children = new ObservableCollection<CategoryItem>((child_dic.TryGet(item.Id)?
                    .Select(t => new CategoryItem
                    {
                        Id = t.Id,
                        Name = t.Name,
                        ParentId = t.ParentId
                    })
                    ).EmptyIfNull())
                };

                res.Add(category);
            }


            return res;
        }
    }
}
