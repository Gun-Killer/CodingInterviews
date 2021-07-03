using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class ModePaymentWithAccountModelRepository : BaseRepository<ModePaymentWithAccountModel>, IModePaymentWithAccountModelRepository
    {
        public ModePaymentWithAccountModelRepository(AccountDBContext db) : base(db)
        {
        }
    }
}
