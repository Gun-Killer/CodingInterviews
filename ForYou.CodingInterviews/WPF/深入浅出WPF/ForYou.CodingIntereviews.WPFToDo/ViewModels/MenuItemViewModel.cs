using ForYou.CodingIntereviews.WPFToDo.Models;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingIntereviews.WPFToDo.ViewModels
{
    public class MenuItemViewModel
    {

        public MenuItemViewModel()
        {
            Items = new ObservableCollection<MenuItem>()
            {
                new MenuItem()
                {
                    Icon="图标",
                    Name ="我的一天",
                    Count=10
                },
                 new MenuItem()
                {
                    Icon="图标",
                    Name ="我的一天",
                    Count=10
                }
            };
        }
        public ObservableCollection<MenuItem> Items { get; set; }
    }
}
