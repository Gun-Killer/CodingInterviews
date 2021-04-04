using System;
using System.Collections.Generic;
using System.ComponentModel;
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
    /// WindowBinding.xaml 的交互逻辑
    /// </summary>
    public partial class WindowBinding : Window
    {
        BindingClass1 bindingClass1;
        public WindowBinding()
        {
            InitializeComponent();
            bindingClass1 = new BindingClass1() { Name = "默认值" };
            this.tb01.DataContext = bindingClass1;
        }

        private void btn01_Click(object sender, RoutedEventArgs e)
        {
            this.bindingClass1.Name = Guid.NewGuid().ToString();
        }
    }

    public class BindingClass1 : INotifyPropertyChanged
    {
        private string name;

        public string Name
        {
            get => name;
            set
            {
                name = value;
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(Name)));
            }
        }

        public event PropertyChangedEventHandler PropertyChanged;
    }
}
