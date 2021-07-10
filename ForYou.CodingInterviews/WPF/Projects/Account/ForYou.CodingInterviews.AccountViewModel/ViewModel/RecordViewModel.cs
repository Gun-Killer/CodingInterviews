﻿using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel;
using ForYou.CodingInterviews.AccountModel.Repository;
using ForYou.CodingInterviews.Extension;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class RecordViewModel : ViewModelBase
    {
        public RecordViewModel()
        {
            Records = new NotifyTaskCompletion<ObservableCollection<RecordItem>>(GetRecords());
            ViewModelSyncDataManager.AddViewModel(this);
        }

        public NotifyTaskCompletion<ObservableCollection<RecordItem>> Records { get; set; }

        private async Task<ObservableCollection<RecordItem>> GetRecords()
        {
            var recordRepository = AccountServiceProvider.Instance.GetService<IRecordModelRepository>();
            var categoryRepository = AccountServiceProvider.Instance.GetService<ICategoryModelRepository>();
            Dictionary<long, string> categorys = (await categoryRepository.GetAllAsync()).ToDictionary(t => t.Id, t => t.Name);
            return new ObservableCollection<RecordItem>((await recordRepository.GetByPageAsync(0, 50)).Select(t => new RecordItem
            {
                Amount = t.Amount,
                CategoryName = categorys.TryGet(t.CategoryId),
                Id = t.Id,
                RecordTime = t.RecordTime,
                UserName = string.Empty,
                Remark = t.Remark
            }));
        }


        public void SyncNewRecord()
        {
            Records = new NotifyTaskCompletion<ObservableCollection<RecordItem>>(GetRecords());
            OnPropertyChanged(nameof(Records));
        }
    }
}
