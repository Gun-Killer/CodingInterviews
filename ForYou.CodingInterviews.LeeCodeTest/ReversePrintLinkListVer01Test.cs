using ForYou.CodingInterviews.LeeCode.Offer06;
using NUnit.Framework;

namespace ForYou.CodingInterviews.LeeCodeTest
{
    public class ReversePrintLinkListVer01Test
    {
        [SetUp]
        public void Setup()
        {
        }

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
            ReversePrintLinkListVer01 reversePrintLinkListVer01 = new ReversePrintLinkListVer01();
            var ouput = reversePrintLinkListVer01.Print(head);
            for (int i = 0; i < ouput.Length; i++)
            {
                Assert.That(result[i] == ouput[i]);
            }
        }
    }
}