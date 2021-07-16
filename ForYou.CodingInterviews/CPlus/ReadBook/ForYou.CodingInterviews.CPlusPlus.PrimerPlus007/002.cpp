#include <iostream>

using namespace std;


void towDArray(int num[][4], int rows);
void towDArray2(int num[][4], int rows);
void towDArray3(int (*num)[4], int rows);

int main()
{
    int num = 10;
    const int* num_p = &num;

    //*num_p = 11;  error


    const int num2 = 20;
    const int* num2_p = &num2;

    const int num3 = 30;
    //int* num3_p = &num3; error

    int numArr[][4]
    {
        {1,2,3},
        {4,5,6},
        {9,8,9},
    };
    towDArray(numArr, 3);
    towDArray2(numArr, 3);
    towDArray3(numArr, 3);
    return 0;
}

void towDArray(int num[][4], int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            sum += num[i][k];
        }
    }
    cout << "sum is " << sum << endl;
}

void towDArray2(int num[][4], int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            sum += *(*(num + i) + k);
        }
    }
    cout << "sum is " << sum << endl;
}

void towDArray3(int(*num)[4], int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            sum += *(*(num + i) + k);
        }
    }
    cout << "sum is " << sum << endl;
}
