using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public interface IUserModelRepository : IBaseRepository<UserModel>
    {
        ValueTask<List<UserModel>> GetAllAsync(CancellationToken cacelToken = default);
    }
}
