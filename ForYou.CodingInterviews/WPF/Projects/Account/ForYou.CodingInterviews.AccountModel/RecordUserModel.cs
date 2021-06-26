using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel
{
    public sealed class RecordUserModel : BaseModel
    {
        public long UserId { get; set; }
        public long RecordId { get; set; }

        public string UserName { get; set; }
    }
}
