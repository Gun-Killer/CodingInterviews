using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer08
{
    class CQueueVer02
    {
        Stack<int> _s1 = new Stack<int>();
        Stack<int> _s2 = new Stack<int>();
        public CQueueVer02()
        {

        }

        public void AppendTail(int value)
        {
            _s1.Push(value);
        }

        public int DeleteHead()
        {
            if (_s2.Count < 1)
            {
                if (_s1.Count > 0)
                {
                    while (_s1.Count > 0)
                    {
                        _s2.Push(_s1.Pop());
                    }
                }
                else
                {
                    return -1;
                }
            }

            return _s2.Pop();
        }
    }
}
