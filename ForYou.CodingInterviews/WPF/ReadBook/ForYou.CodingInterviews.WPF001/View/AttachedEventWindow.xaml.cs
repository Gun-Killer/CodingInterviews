using ForYou.CodingInterviews.Extension;
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

namespace ForYou.CodingInterviews.WPF001.View
{
    /// <summary>
    /// AttachedEventWindow.xaml 的交互逻辑
    /// </summary>
    public partial class AttachedEventWindow : Window
    {
        public AttachedEventWindow()
        {
            InitializeComponent();
        }

        private void StackPanel_Click(object sender, RoutedEventArgs e)
        {
            var btn = e.Source as Button;
            if (btn.IsNull())
            {
                return;
            }
            btn.Content = DateTime.Now.Ticks.ToString();
        }
    }
}
