using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class RecordModelRepository : BaseRepository<RecordModel>, IRecordModelRepository
    {
        public RecordModelRepository(AccountDBContext db) : base(db)
        {
        }

        public async Task<List<RecordModel>> GetByPageAsync(int page, int pageSize, CancellationToken cacelToken = default)
        {
            return await ModelNoTacking
                 .Skip(page * pageSize)
                 .Take(pageSize)
                 .OrderByDescending(t => t.RecordTime)
                 .ThenByDescending(t => t.Id)
                 .ToListAsync();
        }
    }
}
