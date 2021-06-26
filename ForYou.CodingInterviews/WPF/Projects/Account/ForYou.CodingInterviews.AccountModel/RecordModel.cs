using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel
{
    public sealed class RecordModel : BaseModel
    {
        public decimal Amount { get; set; }

        public string Remark { get; set; }

        public DateTime RecordTime { get; set; }

        /// <summary>
        /// 分类
        /// </summary>
        public long CategoryId { get; set; }

        /// <summary>
        /// 账本id
        /// </summary>
        public long BookId { get; set; }
    }
}
