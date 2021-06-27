using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel
{
    public sealed class CategoryModel : BaseModel
    {
        public string Name { get; set; }

        public long ParentId { get; set; }
    }
}
