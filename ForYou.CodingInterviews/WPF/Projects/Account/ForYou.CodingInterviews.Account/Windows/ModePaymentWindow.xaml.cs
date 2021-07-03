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

namespace ForYou.CodingInterviews.Account.Windows
{
    /// <summary>
    /// Interaction logic for ModePaymentWindow.xaml
    /// </summary>
    public partial class ModePaymentWindow : Window
    {
        public ModePaymentWindow()
        {
            InitializeComponent();
        }

        int _selectedIndex = -1;
        private void ModePaymentLBMouseLeftClick(object sender, MouseButtonEventArgs e)
        {
            var lb = sender as ListBox;
            if(lb.SelectedIndex == _selectedIndex)
            {
                lb.SelectedItem = null;
            }
            _selectedIndex = lb.SelectedIndex;
        }
    }
}
