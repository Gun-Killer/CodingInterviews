using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class ModePaymentWithAccountModelRepository : BaseRepository<ModePaymentWithAccountModel>, IModePaymentWithAccountModelRepository
    {
        public ModePaymentWithAccountModelRepository(AccountDBContext db) : base(db)
        {
        }

        public async  ValueTask<List<ModePaymentWithAccountModel>> GetAllAsync(CancellationToken cancelToken = default)
        {
            return await ModelNoTacking
                .ToListAsync(cancelToken);
        }

        public async ValueTask<List<ModePaymentWithAccountModel>> GetByModeAccountIdsAsync(ICollection<long> modeIds, ICollection<long> accountIds)
        {
            return await Model
                .Where(t => modeIds.Contains(t.ModeId) && accountIds.Contains(t.AccountId))
                .ToListAsync();
        }

        public async ValueTask<List<ModePaymentWithAccountModel>> GetByModeIdsAsync(ICollection<long> modeIds)
        {
            return await Model
                 .Where(t => modeIds.Contains(t.ModeId))
                 .ToListAsync();
        }
    }
}
