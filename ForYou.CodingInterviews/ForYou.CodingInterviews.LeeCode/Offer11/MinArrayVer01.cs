using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer11
{
    /// <summary>
    /// https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/
    /// </summary>
    public class MinArrayVer01
    {
        public int MinArray(int[] numbers)
        {
            if (numbers == null)
            {
                return -1;
            }

            if (numbers.Length == 1)
            {
                return numbers[0];
            }

            var start = 0;
            var end = numbers.Length - 1;
            while (start < end)
            {
                var index = (start + end) / 2;
                if (numbers[index] > numbers[end])
                {
                    start = index + 1;
                }
                else if (numbers[index] == numbers[end])
                {
                    end = end - 1;
                }
                else
                {
                    end = index;
                }
            }

            return numbers[start];
        }
    }
}
