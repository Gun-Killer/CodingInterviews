using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.Extension
{
    public static class EnumerableExtension
    {
        public static IEnumerable<T> EmptyIfNull<T>( this IEnumerable<T> source)
        {
            if(source.IsNull())
            {
                return Enumerable.Empty<T>();
            }

            return source;
        }
    }
}
