using ForYou.CodingIntereviews.WPFLayout.ViewModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace ForYou.CodingIntereviews.WPFLayout
{
    /// <summary>
    /// WindowBinding02.xaml 的交互逻辑
    /// </summary>
    public partial class WindowBinding02 : Window
    {
        public WindowBinding02()
        {
            InitializeComponent();

            this.DataContext = new PersonViewModel()
            {
                GridList = new System.Collections.ObjectModel.ObservableCollection<Models.Person>(new List<Models.Person>
                {
                    new Models.Person
                    {
                        Age = 10,
                        Name = "001"
                    }
                })
            };
        }
    }
}
