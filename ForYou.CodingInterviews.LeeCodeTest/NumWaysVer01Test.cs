using ForYou.CodingInterviews.LeeCode.Offer10;
using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCodeTest
{
    public class NumWaysVer01Test
    {
        NumWaysVer01 _svc;
        [SetUp]
        public void Init()
        {
            _svc = new NumWaysVer01();
        }
        [TestCase(1,1)]
        [TestCase(2,2)]
        [TestCase(3,3)]
        [TestCase(7,21)]
        public void NumWaysTest(int input,int result)
        {
            var assert=_svc.NumWays(input) == result;
            Assert.IsTrue(assert);
        }
    }
}
