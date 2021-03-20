using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer06
{
    public class ReversePrintLinkListVer03 : IPrintLinkList
    {
        public int[] Print(LinkListNode head)
        {
            if (head == null)
            {
                return Array.Empty<int>();
            }

            var next = head;
            var count = 0;
            do
            {
                count++;
                next = next.next;
            } while (next != null);

            var res = new int[count];
            next = head;

            do
            {
                count--;
                res[count] = next.val;
                next = next.next;
            } while (next != null);

            return res;
        }
    }
}
