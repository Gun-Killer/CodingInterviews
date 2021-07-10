using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel
{
    public sealed class RecordAccountAmountModel : BaseModel
    {
        public long RecordId { get; set; }

        public long ModeOfPaymentId { get; set; }


        public long AccountPaymentId { get; set; }

        /// <summary>
        /// 优惠前
        /// </summary>
        public decimal AmountBefore { get; set; }

        /// <summary>
        /// 优惠后
        /// </summary>
        public decimal AmountAfter { get; set; }

        /// <summary>
        /// 优惠
        /// </summary>
        public decimal Discounts { get; set; }

        public InOutEnum InOut { get; set; } = InOutEnum.In;
    }


    public enum InOutEnum
    {
        Out = 1,
        In = 2
    }
}
