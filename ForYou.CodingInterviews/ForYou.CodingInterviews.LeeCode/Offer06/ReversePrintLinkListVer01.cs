using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer06
{
    public class ReversePrintLinkListVer01 : IPrintLinkList
    {
        public int[] Print(LinkListNode head)
        {
            if (head == null)
            {
                return Array.Empty<int>();
            }
            Stack<int> cache = new Stack<int>();
            var next = head;
            do
            {
                cache.Push(next.val);
                next = next.next;
            } while (next != null);
            return cache.ToArray();
        }
    }
}
