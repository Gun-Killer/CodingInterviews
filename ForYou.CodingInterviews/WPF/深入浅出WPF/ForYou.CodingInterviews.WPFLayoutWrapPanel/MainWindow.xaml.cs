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

namespace ForYou.CodingInterviews.WPFLayoutWrapPanel
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

        private void btn_panel1_Unchecked(object sender, RoutedEventArgs e)
        {
            panel1.Visibility = Visibility.Collapsed;
        }

        private void btn_panel1_Checked(object sender, RoutedEventArgs e)
        {
            panel1.Visibility = Visibility.Visible;
        }
    }
}
