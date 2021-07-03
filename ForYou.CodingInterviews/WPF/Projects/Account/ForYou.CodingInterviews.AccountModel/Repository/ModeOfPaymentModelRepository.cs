using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class ModeOfPaymentModelRepository : BaseRepository<ModeOfPaymentModel>, IModeOfPaymentModelRepository
    {
        public ModeOfPaymentModelRepository(AccountDBContext db) : base(db)
        {

        }
    }
}
