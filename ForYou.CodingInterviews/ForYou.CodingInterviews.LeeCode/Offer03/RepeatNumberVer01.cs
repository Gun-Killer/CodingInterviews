using System;
using System.Collections.Generic;
using System.Linq;

namespace ForYou.CodingInterviews.LeeCode.Offer03
{

    public class RepeatNumberVer01 : IRepeatNumber
    {
        private readonly int[] _nums;

        public RepeatNumberVer01(int[] nums)
        {
            _nums = nums ?? throw new ArgumentNullException(nameof(nums), "is null");
        }

        public int Find()
        {
            HashSet<int> set = new(_nums.Length);
            return _nums.FirstOrDefault(t => !set.Add(t));
        }
    }
}
