#include "ReferenceMethodParameter.h"

void ReferenceMethodParameter::test1(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void ReferenceMethodParameter::test2(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int& ReferenceMethodParameter::test3()
{
    int num1 = 10;

    return num1;//unsafe
}
