using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer05
{
    public class ReplaceSpaceVer02 : IReplaceSpace
    {
        private string _s;

        public ReplaceSpaceVer02(string s)
        {
            _s = s;
        }

        public string ReplaceSpace()
        {
            char[] cache = new char[_s.Length];
            int index = 0;
            foreach (var item in _s)
            {
                if (item == ' ')
                {
                    cache[index++] = '%';
                    cache[index++] = '2';
                    cache[index++] = '0';
                }
                else
                {
                    cache[index++] = item;
                }
            }
            return new string(cache, 0, index);
        }
    }
}
