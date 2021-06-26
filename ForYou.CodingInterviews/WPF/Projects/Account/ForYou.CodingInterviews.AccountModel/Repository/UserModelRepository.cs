using System.Collections.Generic;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class UserModelRepository : BaseRepository<UserModel>, IUserModelRepository
    {
        public UserModelRepository(AccountDBContext db) : base(db)
        {

        }

        public async ValueTask<List<UserModel>> GetAllAsync(CancellationToken cacelToken = default)
        {
            return await Model.ToListAsync(cacelToken);
        }
    }
}
