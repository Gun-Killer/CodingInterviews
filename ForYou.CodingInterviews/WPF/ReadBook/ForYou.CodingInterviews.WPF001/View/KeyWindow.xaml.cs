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
    /// KeyWindow.xaml 的交互逻辑
    /// </summary>
    public partial class KeyWindow : Window
    {
        public KeyWindow()
        {
            InitializeComponent();
        }

        private void TextBox_KeyDown(object sender, KeyEventArgs e)
        {
            e.Handled = true;
            var tb = sender as TextBox;
            if (tb.IsNull())
            {
                return;
            }
            tb.Text = $"{e.Key.ToString()}|{e.KeyboardDevice.Modifiers}";
        }

        private void TextBox_PreviewKeyDown(object sender, KeyEventArgs e)
        {
            if(e.Key == Key.Space)
            {
                TextBox_KeyDown(sender, e);
            }
        }
    }
}
