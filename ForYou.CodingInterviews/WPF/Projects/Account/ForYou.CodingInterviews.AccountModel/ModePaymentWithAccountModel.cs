using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel
{
    /// <summary>
    /// 支付方式下的支付账户
    /// </summary>
    public sealed class ModePaymentWithAccountModel : BaseModel
    {
        public long ModeId { get; set; }

        public long AccountId { get; set; }
    }
}
