using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountViewModel
{
    public sealed class RecordItem
    {
        public long Id { get; set; }

        public decimal Amount { get; set; }

        public string CategoryName { get; set; }

        public DateTime RecordTime { get; set;  }

        public string UserName { get; set; }
    }
}
