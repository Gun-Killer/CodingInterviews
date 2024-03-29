﻿using ForYou.CodingInterviews.WPF001.View;
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

namespace ForYou.CodingInterviews.WPF001
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

        private void AttachedWindowBtnClicked(object sender, RoutedEventArgs e)
        {
            AttachedEventWindow attachedMethodWindow = new AttachedEventWindow();
            attachedMethodWindow.Show();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            new KeyWindow().Show();
        }

        private void Buton_Click_1(object sender, RoutedEventArgs e)
        {
            new MouseWindow().Show();
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            new MouseDragWindow().Show();
        }
    }
}
