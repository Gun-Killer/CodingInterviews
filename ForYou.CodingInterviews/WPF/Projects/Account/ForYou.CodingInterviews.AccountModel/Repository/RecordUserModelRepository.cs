using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class RecordUserModelRepository : BaseRepository<RecordUserModel>, IRecordUserModelRepository
    {
        public RecordUserModelRepository(AccountDBContext db) : base(db)
        {
        }
    }
}
