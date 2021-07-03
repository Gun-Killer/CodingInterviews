using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class AccountPaymentModelRepository : BaseRepository<AccountPaymentModel>, IAccountPaymentModelRepository
    {
        public AccountPaymentModelRepository(AccountDBContext db) : base(db)
        {
        }
    }
}
