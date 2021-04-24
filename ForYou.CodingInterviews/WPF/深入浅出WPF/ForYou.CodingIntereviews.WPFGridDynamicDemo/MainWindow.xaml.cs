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
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace ForYou.CodingIntereviews.WPFGridDynamicDemo
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void btn_text_change_Checked(object sender, RoutedEventArgs e)
        {
            btn1.Content = "have a long text btn";
        }

        private void btn_text_change_Unchecked(object sender, RoutedEventArgs e)
        {
            btn1.Content = "pre";
        }
    }
}
