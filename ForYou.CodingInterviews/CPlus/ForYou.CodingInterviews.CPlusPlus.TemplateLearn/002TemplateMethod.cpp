#include <iostream>

using namespace std;

template <class T>
void mySwap(T& input1, T& input2)
{
    T temp = input1;
    input1 = input2;
    input2 = temp;
}

template <class T>
void sortArray(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }

        if (max != i)
        {
            mySwap(arr[i], arr[max]);
        }
    }
}

int main002()
{
    int arr[] = { 0 ,8,9,4,20,1 };

    int len = sizeof(arr) / sizeof(int);
    sortArray(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}