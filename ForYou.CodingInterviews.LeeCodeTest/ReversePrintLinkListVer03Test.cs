using ForYou.CodingInterviews.LeeCode.Offer06;
using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCodeTest
{
    public class ReversePrintLinkListVer03Test
    {
        [Test]
        [TestCase(new[] { 1, 2, 3 }, new int[] { 3, 2, 1 })]
        public void ReversePrint(int[] input, int[] result)
        {
            LinkListNode head = new LinkListNode(input[0]);
            LinkListNode next = head; ;
            for (int i = 1; i < input.Length; i++)
            {
                next.next = new LinkListNode(input[i]);
                next = next.next;
            }
            ReversePrintLinkListVer03 reversePrintLinkListVer03 = new ReversePrintLinkListVer03();
            var ouput = reversePrintLinkListVer03.Print(head);
            for (int i = 0; i < ouput.Length; i++)
            {
                Assert.That(result[i] == ouput[i]);
            }
        }
    }
}
