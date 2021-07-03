using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.Extension
{
    public static class DictionaryExtension
    {
        public static TValue? TryGet<TKey, TValue>(this IDictionary<TKey, TValue> dic, TKey key, TValue? defaultValue = default)
        {
            if(dic.TryGetValue(key, out TValue value))
            {
                return value;
            }
            return defaultValue;
        }
    }
}
