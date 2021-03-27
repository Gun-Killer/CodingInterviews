using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer12
{
    /// <summary>
    /// https://leetcode-cn.com/problems/ju-zhen-zhong-de-lu-jing-lcof/
    /// 
    /// 解题思路，先找到第一个匹配的字符位置，以该位置上下左右在进行寻找下个字符位置，一直重复。找到了继续
    /// 找不到重新在开始匹配。重复上面过程
    /// </summary>
    public class PathExistVer01
    {
        public bool Exist(char[][] board, string word)
        {
            if (string.IsNullOrEmpty(word))
            {
                return false;
            }
            if ((board[0].Length * board.Length) < word.Length)
            {
                return false;
            }
            var wordSpan = word.AsSpan();
            var endIndex = word.Length;


           
            return false;
        }
    }
}
