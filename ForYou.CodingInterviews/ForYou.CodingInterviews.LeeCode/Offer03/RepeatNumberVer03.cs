using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer03
{
    public class RepeatNumberVer03 : IRepeatNumber
    {
        private int[] _nums;

        public RepeatNumberVer03(int[] nums)
        {
            _nums = nums;
        }

        public int Find()
        {
            int len = _nums.Length - 1;
            for (int i = 0; i < len; i++)
            {
                for (int j = i + 1; j < _nums.Length; j++)
                {
                    if (_nums[i] == _nums[j])
                    {
                        return _nums[i];
                    }
                }
            }

            return -1;
        }
    }
}
