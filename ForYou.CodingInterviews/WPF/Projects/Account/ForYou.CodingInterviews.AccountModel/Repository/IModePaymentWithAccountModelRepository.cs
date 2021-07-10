using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public interface IModePaymentWithAccountModelRepository : IBaseRepository<ModePaymentWithAccountModel>
    {
        ValueTask<List<ModePaymentWithAccountModel>> GetByModeIdsAsync(ICollection<long> modeIds);

        ValueTask<List<ModePaymentWithAccountModel>> GetByModeAccountIdsAsync(ICollection<long> modeIds, ICollection<long> accountIds);

        ValueTask<List<ModePaymentWithAccountModel>> GetAllAsync(CancellationToken cancelToken = default);

    }
}
