using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer06
{
    public class ReversePrintLinkListVer02 : IPrintLinkList
    {
        public int[] Print(LinkListNode head)
        {
            if (head == null)
            {
                return Array.Empty<int>();
            }
            List<int> cache = new List<int>();
            var next = head;
            do
            {
                cache.Add(next.val);
                next = next.next;
            } while (next != null);
            var res = cache.ToArray();
            Array.Reverse(res);
            return res;
        }
    }
}
