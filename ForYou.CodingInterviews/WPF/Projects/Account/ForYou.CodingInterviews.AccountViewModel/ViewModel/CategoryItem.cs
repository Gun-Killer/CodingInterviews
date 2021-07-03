using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class CategoryItem
    {
        public long Id { get; set; }

        public string Name { get; set; }

        public long ParentId { get; set; }

        public ObservableCollection<CategoryItem> Children { get; set; }
    }
}
