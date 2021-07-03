using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class ModeOfPaymentModelRepository : BaseRepository<ModeOfPaymentModel>, IModeOfPaymentModelRepository
    {
        public ModeOfPaymentModelRepository(AccountDBContext db) : base(db)
        {

        }

        public async Task<List<ModeOfPaymentModel>> GetAllAsync(CancellationToken cancelToken = default)
        {
            return await ModelNoTacking
                 .ToListAsync(cancelToken);
        }
    }
}
