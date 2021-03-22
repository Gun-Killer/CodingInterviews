using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer09
{
    public class FibonacciVer01
    { 
        public int Fib(int n)
        {
            if (n < 2)
            {
                return n;
            }

            int first = 0;
            int second = 1;
            for (int i = 1; i < n; i++)
            {
                second = first + second;
                first = second - first;
                second = second % 1000000007;
            }
            return second;
        }
    }
}
