using ForYou.CodingInterviews.LeeCode.Offer12;
using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCodeTest
{
    public class PathExistVer01Test
    {
        PathExistVer01 _existVer01;

        [SetUp]
        public void Init()
        {
            _existVer01 = new PathExistVer01();
        }


        [Test]
        public void Exist()
        {
            var input = new char[][]
            {
                new char []{ 'a','b','c','e'},
                new char [] { 's','f','c','s'},
                new char [] { 'a','d','e','e'},
            };
            Assert.That(_existVer01.Exist(input, "bfce"));
            input = new char[][]
             {
                    new char []{ 'a','b'},
                    new char [] { 'c','d'}
             };
            Assert.That(_existVer01.Exist(input, "acdb"));

            input = new char[][]
            {
                    new char []{ 'a'}
            };
            Assert.That(_existVer01.Exist(input, "ab") == false);

        }
    }
}
