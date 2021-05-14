using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer13
{
    /// <summary>
    /// https://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof/
    /// </summary>
    public class MovingCountVer01 : IMovingCount
    {
        public int MovingCount(int m, int n, int k)
        {
            var mark = CreateMark(m, n);//标记是否可达

            bool end = false;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (Cal(i, j) <= k)
                    {
                        mark[i, j] = true;
                        Left(mark, i, j, k);
                        Up(mark, i, j, k);
                        Right(mark, i, j, k);
                        Bottom(mark, i, j, k);
                    }
                    else
                    {
                        if (j == 0)
                        {
                            end = true;
                        }
                        break;
                    }
                    
                }
                if (end)
                {
                    break;
                }
            }

            int count = 0;
            for (int x = 0; x < m; x++)
            {
                for (int y = 0; y < n; y++)
                {
                    if (mark[x, y])
                    {
                        count++;
                    }
                }
            }
            return count;
        }

        int Cal(int m, int n)
        {
            return Cal(m) + Cal(n);
        }

        int Cal(int input)
        {
            if (input < 10)
            {
                return input;
            }
            if (input == 100)
            {
                return 1;
            }

            return input % 10 + input / 10;
        }

        private bool[,] CreateMark(int m, int n)
        {
            return new bool[m, n];
        }


        private void Left(bool[,] mark, int xEnd, int yEnd, int k)
        {
            for (int i = yEnd - 1; i >= 0; i--)
            {
                if (Cal(xEnd, i) <= k)
                {
                    mark[xEnd, i] = true;
                }
                else
                {
                    break;
                }
            }
        }

        private void Up(bool[,] mark, int xEnd, int yEnd, int k)
        {
            for (int i = xEnd - 1; i >= 0; i--)
            {
                if (Cal(i, yEnd) <= k)
                {
                    mark[i, yEnd] = true;
                }
                else
                {
                    break;
                }
            }
        }

        private void Right(bool[,] mark, int xEnd, int yEnd, int k)
        {
            for (int i = yEnd + 1; i < mark.GetLength(1); i++)
            {
                if (Cal(xEnd, i) <= k)
                {
                    mark[xEnd, i] = true;
                }
                else
                {
                    break;
                }
            }
        }

        private void Bottom(bool[,] mark, int xEnd, int yEnd, int k)
        {
            for (int i = xEnd + 1; i < mark.GetLength(0); i++)
            {
                if (Cal(i, yEnd) <= k)
                {
                    mark[i, yEnd] = true;
                }
                else
                {
                    break;
                }
            }
        }
    }
}
