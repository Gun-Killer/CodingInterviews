using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel
{
    /// <summary>
    /// 支付账户
    /// </summary>
    public sealed class AccountPaymentModel : BaseModel
    {
        public string Name { get; set; }

        public decimal Balance { get; set; }

        /// <summary>
        /// 是否可以被消费
        /// </summary>
        public bool IsConsumption { get; set; }
    }
}
