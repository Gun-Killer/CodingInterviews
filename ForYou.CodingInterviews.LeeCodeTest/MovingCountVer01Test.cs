using ForYou.CodingInterviews.LeeCode.Offer13;
using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCodeTest
{
    [TestFixture]
    public class MovingCountVer01Test
    {

        [Test]
        public void MovingCountTest()
        {
            MovingCountVer01 mid = new MovingCountVer01();
            Assert.That(mid.MovingCount(2, 3, 1) == 3);
            Assert.That(mid.MovingCount(3, 1, 0) == 1);
            Assert.That(mid.MovingCount(16, 8, 4) == 15);
        }
    }
}
