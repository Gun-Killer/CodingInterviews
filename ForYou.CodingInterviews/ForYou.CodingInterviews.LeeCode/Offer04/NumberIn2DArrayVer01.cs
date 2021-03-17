using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer04
{
    public class NumberIn2DArrayVer01 : INumberIn2DArray
    {
        private int[][] _matrix;

        public NumberIn2DArrayVer01(int[][] matrix)
        {
            _matrix = matrix;
        }

        public bool Exist(int input)
        {
            if (_matrix.Length < 1)
            {
                return false;
            }

            if (_matrix[0].Length < 1)
            {
                return false;
            }

            int height = _matrix.Length;
            int width = _matrix[0].Length;
            for (int i = 0; i < height; i++)
            {
                for (int j = 0; j < width; j++)
                { 
                    if(_matrix[i][j]> input)
                    {
                        break;
                    }
                    if (_matrix[i][j] == input)
                    {
                        return true;
                    }
                }
            }

            return false;
        }
    }
}
