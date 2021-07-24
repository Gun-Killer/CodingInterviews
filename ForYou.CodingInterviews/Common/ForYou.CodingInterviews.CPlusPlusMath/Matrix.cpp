#include "Matrix.h"

namespace GunKiller
{
    void cross(int** matrix1, int m1_row, int m1_column, int** matrix2, int m2_row, int m2_column, int** res)
    {
        for (int res_row = 0; res_row < m1_row; res_row++)
        {
            for (int res_column = 0; res_column < m2_column; res_column++)
            {
                int temp{ 0 };
                for (int i = 0; i < m1_column; i++)
                {
                    temp += matrix1[res_row][i] * matrix2[i][res_column];
                }
                res[res_row][res_column] = temp;
            }
        }
    }
}