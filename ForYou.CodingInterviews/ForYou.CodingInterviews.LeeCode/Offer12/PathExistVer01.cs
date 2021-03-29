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

            for (int i = 0; i < board.Length; i++)
            {
                for (int j = 0; j < board[i].Length; j++)
                {
                    if (Find(i, j, board, 0, wordSpan))
                    {
                        return true;
                    }
                }
            }

            return false;
        }

        private bool Find(int row, int column, char[][] board, int index, ReadOnlySpan<char> word)
        {
            if (row < 0 || column < 0 || row >= board.Length || column >= board[0].Length)
            {
                return false;
            }

            if (board[row][column] != word[index])
            {
                return false;
            }

            if (index == (word.Length - 1))
            {
                return true;
            }
            index++;
            var mid = board[row][column];
            board[row][column] = '~';//此次会导致cpu 缓存无法使用
            var res = Find(row - 1, column, board, index, word)
                || Find(row, column - 1, board, index, word)
                || Find(row + 1, column, board, index, word)
                || Find(row, column + 1, board, index, word);
            board[row][column] = mid;
            return res;
        }
    }
}
