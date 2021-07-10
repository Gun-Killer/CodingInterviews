﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class RecordAccountAmountModelRepository : BaseRepository<RecordAccountAmountModel>, IRecordAccountAmountModelRepository
    {
        public RecordAccountAmountModelRepository(AccountDBContext db) : base(db)
        {
        }
    }
}
