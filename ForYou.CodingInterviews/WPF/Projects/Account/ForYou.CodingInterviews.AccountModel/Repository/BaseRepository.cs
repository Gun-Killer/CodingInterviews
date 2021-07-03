using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using ForYou.CodingInterviews.AccountModel.Common;
using Microsoft.EntityFrameworkCore;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public abstract class BaseRepository<T> : IBaseRepository<T>
        where T : class, IModel
    {
        protected AccountDBContext _db;

        public BaseRepository(AccountDBContext db)
        {
            _db = db;
        }

        protected DbSet<T> Model => _db.Set<T>();

        protected IQueryable<T> ModelNoTacking => _db.Set<T>().AsNoTracking();

        public async ValueTask<bool> AddAsync(T model, CancellationToken cancelToken = default)
        {
            if (model.Id < 1)
            {
                model.Id = IdService.NewId();
            }
            model.CreatedTime = DateTime.Now;
            model.UpdatedTime = DateTime.Now;
            model.CreatedBy = "Admin";
            model.UpdatedBy = "Admin";
            await Model.AddAsync(model, cancelToken);
            return true;
        }

        public async ValueTask<bool> AddRangeAsync(IEnumerable<T> models, CancellationToken cancelToken = default)
        {
            foreach (var model in models)
            {
                if (model.Id < 1)
                {
                    model.Id = IdService.NewId();
                }
                model.CreatedTime = DateTime.Now;
                model.UpdatedTime = DateTime.Now;
            }
            await Model.AddRangeAsync(models, cancelToken);
            return true;
        }

        public async ValueTask<bool> DeleteAsync(T model, CancellationToken cancelToken = default)
        {
            Model.Remove(model);
            return await ValueTask.FromResult(true);
        }

        public async ValueTask<T?> GetByIdAsync(long id, CancellationToken cancelToken = default)
        {
            return await Model.FirstOrDefaultAsync(t => t.Id == id);
        }

        public async Task<int> SaveAsync(CancellationToken cancelToken = default)
        {
            return await _db.SaveChangesAsync(cancelToken);
        }

        public async ValueTask<bool> UpdateAsync(T model, CancellationToken cancelToken = default)
        {
            Model.Update(model);
            return await ValueTask.FromResult(true);
        }
    }
}
