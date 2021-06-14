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
    /// MouseDragWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MouseDragWindow : Window
    {
        public MouseDragWindow()
        {
            InitializeComponent();
            rtb.AddHandler(RichTextBox.DragOverEvent, new DragEventHandler(RichTextBox_DragOver), true);
            rtb.AddHandler(RichTextBox.DropEvent, new DragEventHandler(RichTextBox_Drop), true);
        }

        private void RichTextBox_DragEnter(object sender, DragEventArgs e)
        {

        }

        private void RichTextBox_Drop(object sender, DragEventArgs e)
        {

        }

        private void RichTextBox_MouseEnter(object sender, MouseEventArgs e)
        {
          
        }

        private void RichTextBox_DragOver(object sender, DragEventArgs e)
        {
            var tb = sender as RichTextBox;

            e.Handled = false;
        }
    }
}
