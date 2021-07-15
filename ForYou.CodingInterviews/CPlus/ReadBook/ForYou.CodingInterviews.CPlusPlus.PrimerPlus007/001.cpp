#include <iostream>

using namespace std;

int calSum(int arr[], int size);

int calSum2(int *arr, int size);

int main()
{
    int arr[]{ 1,4 ,6,78,45,14,25,36,111 };

    cout << calSum(arr, sizeof(arr) / (sizeof(int))) << endl;
    cout << calSum2(arr, sizeof(arr) / (sizeof(int))) << endl;
    cout << calSum(arr + 4, sizeof(arr + 4) / (sizeof(int))) << endl;
    return 0;
}

int calSum(int arr[], int size)
{
    cout << arr << " = arr" << endl;
    cout << sizeof(arr) << " = sizeof arr" << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int calSum2(int* arr, int size)
{
    cout << arr << " = arr" << endl;
    cout << sizeof(arr) << " = sizeof arr" << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
