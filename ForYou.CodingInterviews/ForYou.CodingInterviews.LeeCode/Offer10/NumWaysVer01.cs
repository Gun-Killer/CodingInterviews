using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer10
{
    /// <summary>
    /// https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/
    /// </summary>
    public class NumWaysVer01
    {
        public int NumWays(int n)
        {
            if (n < 2)
            {
                return 1;
            }

            int first = 1;
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
