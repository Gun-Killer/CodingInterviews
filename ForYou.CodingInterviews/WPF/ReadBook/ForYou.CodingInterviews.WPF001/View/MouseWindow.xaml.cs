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
    /// MouseWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MouseWindow : Window
    {
        public MouseWindow()
        {
            InitializeComponent();
        }

        private void Grid_MouseMove(object sender, MouseEventArgs e)
        {
            var point = e.GetPosition(this);
            pointLB.Content = $"{point.X}|{point.Y}";
        }
    }
}
