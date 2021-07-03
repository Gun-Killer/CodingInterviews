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
using ForYou.CodingInterviews.Account.Windows;

namespace ForYou.CodingInterviews.Account
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

        private void ModePaymentManagementClicked(object sender, RoutedEventArgs e)
        {
            ModePaymentWindow modePaymentWindow = new ModePaymentWindow();
            modePaymentWindow.Owner = this;
            modePaymentWindow.WindowStartupLocation = WindowStartupLocation.CenterOwner;
            modePaymentWindow.Show();
        }
    }
}
