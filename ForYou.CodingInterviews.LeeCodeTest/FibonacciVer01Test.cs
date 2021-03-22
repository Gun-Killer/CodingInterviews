using ForYou.CodingInterviews.LeeCode.Offer09;
using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCodeTest
{
    public class FibonacciVer01Test
    {
        FibonacciVer01 fibonacci; 
        [SetUp]
        public void Init()
        {
            fibonacci = new FibonacciVer01();
        }
        [TestCase(2,1)]
        [TestCase(5,5)]
        public void FibTest(int input, int result)
        {
            Assert.That(fibonacci.Fib(input) == result);
        }
    }
}
