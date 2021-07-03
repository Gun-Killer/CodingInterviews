using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.Extension
{
    public static class StringExtension
    {
        public static bool IsNullOrEmpty(this String str)
        {
            return string.IsNullOrEmpty(str);
        }

        public static bool NotNullAndEmpty(this String str)
        {
            return string.IsNullOrEmpty(str) == false;
        }
    }
}
