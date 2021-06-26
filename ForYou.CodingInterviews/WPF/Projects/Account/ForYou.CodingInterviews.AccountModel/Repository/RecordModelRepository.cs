using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class RecordModelRepository : BaseRepository<RecordModel>, IRecordModelRepository
    {
        public RecordModelRepository(AccountDBContext db) : base(db)
        {
        }
    }
}
