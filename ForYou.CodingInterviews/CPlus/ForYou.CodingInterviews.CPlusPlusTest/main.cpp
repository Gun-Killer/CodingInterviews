#include <iostream>

#include "Matrix.h"

int main()
{

    int** martix1 = new int* [2];

    int k = 1;
    for (int i = 0; i < 2; i++)
    {
        martix1[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            martix1[i][j] = k;
            k++;
        }
    }

    int** martix2 = new int* [3];

    for (int i = 0; i < 3; i++)
    {
        martix2[i] = new int[2];
    }
    k = 1;
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            martix2[j][i] = k;
            k++;
        }
    }

    int** martix3 = new int* [2];

    for (int i = 0; i < 2; i++)
    {
        martix3[i] = new int[2];
    }

    GunKiller::cross(martix1, 2, 3, martix2, 3, 2, martix3);


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << " i j " << martix3[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}