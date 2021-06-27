using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class CategoryModelRepository : BaseRepository<CategoryModel>, ICategoryModelRepository
    {
        public CategoryModelRepository(AccountDBContext db) : base(db)
        {
        }

        public async Task<List<CategoryModel>> GetAllAsync(CancellationToken cancelToken = default)
        {
            return await Model.ToListAsync(cancelToken);
        }
    }
}
