using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer08
{
    /// <summary>
    /// https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/
    /// </summary>
    public class CQueue
    {
        Stack<int> _s1 = new Stack<int>();
        Stack<int> _s2 = new Stack<int>();
        public CQueue()
        {

        }

        public void AppendTail(int value)
        {
            _s1.Push(value);
        }

        public int DeleteHead()
        {
            if (_s1.Count < 1 )
            {
                return -1;
            }

            while (_s1.Count > 0)
            {
                _s2.Push(_s1.Pop());
            }

            var res = _s2.Pop();
            while (_s2.Count > 0)
            {
                _s1.Push(_s2.Pop());
            }
            return res;
        }
    }
}
