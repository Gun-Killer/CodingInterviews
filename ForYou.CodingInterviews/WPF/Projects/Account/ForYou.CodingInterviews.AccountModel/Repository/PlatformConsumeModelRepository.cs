using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class PlatformConsumeModelRepository : BaseRepository<PlatformConsumeModel>, IPlatformConsumeModelRepository
    {
        public PlatformConsumeModelRepository(AccountDBContext db) : base(db)
        {
        }
    }
}
