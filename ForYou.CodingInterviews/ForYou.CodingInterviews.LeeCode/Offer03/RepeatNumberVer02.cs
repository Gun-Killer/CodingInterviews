using System;

namespace ForYou.CodingInterviews.LeeCode.Offer03
{
    public class RepeatNumberVer02 : IRepeatNumber
    {
        private readonly int[] _nums;

        public RepeatNumberVer02(int[] nums)
        {
            _nums = nums;
        }

        public int Find()
        {
            Array.Sort(_nums);
            int len = _nums.Length - 1;
            for (int i = 0; i < len; i++)
            {
                if (_nums[i] == _nums[i + 1])
                {
                    return _nums[i];
                }
            }
            return -1;
        }
    }
}
