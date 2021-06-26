using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public interface IBaseRepository<T> where T : class, IModel
    {
        protected DbSet<T> Model { get; }
        ValueTask<bool> AddAsync(T model, CancellationToken cancelToken = default);

        ValueTask<bool> AddRangeAsync(IEnumerable<T> models,CancellationToken cancelToken = default);

        ValueTask<bool> UpdateAsync(T model, CancellationToken cancelToken = default);

        ValueTask<T?> GetByIdAsync(long id, CancellationToken cancelToken = default);

        ValueTask<bool> DeleteAsync(T model, CancellationToken cancelToken = default);

        Task<int> SaveAsync(CancellationToken cancelToken = default);
    }

}
