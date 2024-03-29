﻿using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;
using ForYou.CodingInterviews.AccountViewModel.Commands;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public class MainWindowViewModel : ViewModelBase
    {
        private RecordViewModel records;

        public MainWindowViewModel()
        {
            BeforeRefreshCommand = new RecordRefreshCommand(false);
            AfterRefreshCommand = new RecordRefreshCommand(true);
            Records = new RecordViewModel();
        }


        public RecordViewModel Records
        {
            get => records;
            set
            {
                records = value;
                OnPropertyChanged(nameof(Records));
            }
        }


        public RecordRefreshCommand BeforeRefreshCommand { get; set; }
        public RecordRefreshCommand AfterRefreshCommand { get; set; }
    }
}
