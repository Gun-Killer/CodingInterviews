using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer05
{
    public class ReplaceSpaceVer01 : IReplaceSpace
    {
        private string _s;

        public ReplaceSpaceVer01(string s)
        {
            _s = s;
        }

        public string ReplaceSpace()
        {
            return _s.Replace(" ", "%20");
        }
    }
}
