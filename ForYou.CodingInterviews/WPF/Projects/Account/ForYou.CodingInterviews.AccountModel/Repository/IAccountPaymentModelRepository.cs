using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public interface IAccountPaymentModelRepository : IBaseRepository<AccountPaymentModel>
    {
        Task<List<AccountPaymentModel>> GetAllAsync(CancellationToken cancelToken = default);
    }
}
