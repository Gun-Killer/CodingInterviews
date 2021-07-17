#include <iostream>

using namespace std;

void student07_01();
void student07_02();
long student07_05(long n);


void student07_06(double arr[], int size);
void student07_08();

double student07_10(double x, double y, double (*func)(double, double));
int main()
{
    //student07_01();

    /*cout << student07_05(5) << endl;*/

    //student07_08();

    return 0;
}

void student07_01()
{
    cout << "-------------------1----------------" << endl;
    int first{ 0 };
    int second{ 0 };

    do
    {
        cout << "Enter int num: ";
        cin >> first;
        cout << "Enter int num: ";
        cin >> second;
        if ((first + second) != 0)
        {
            cout << 2.0 * first * second / (first + second) << endl;
        }
    } while (first != 0 && second != 0);
}

int fillData(double arr[])
{
    int count{ 0 };

    while (count > 0)
    {
        cin >> arr[count];
        if (arr[count] < 1)
        {
            break;
        }
        count++;
    }

    return count;
}


void showAll(double arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << endl;
    }
}

void calAvg(double arr[], int count)
{
    double sum{ 0.0 };
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    cout << sum / count << endl;
}

void student07_02()
{
    cout << "-------------------2----------------" << endl;
}

long student07_05(long n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * student07_05(n - 1);
}

void student07_06(double arr[], int size)
{
    int start{ 0 };
    int end = size - 1;
    while (start < end)
    {
        double temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}


void student07_08()
{
    const char* arr[] = { "1","2","3" };
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}

double student07_10(double x, double y, double(*func)(double, double))
{
    return func(x, y);
}
