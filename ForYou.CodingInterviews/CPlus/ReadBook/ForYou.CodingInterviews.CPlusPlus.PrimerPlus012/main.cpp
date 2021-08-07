#include <iostream>

#include "MyQueue.h"

using namespace std;

int main()
{
    /* MyQueue<int> q;

     q.enqueue(1);
     q.enqueue(2);
     q.enqueue(3);

     while (q.size() > 0)
     {
         cout << q.dequeue() << "\t";
     }*/

    int num1 = 1;
    int& num2 = num1;
    int num3 = num2;

    cout << &num3 << "\t" << &num1 << "\t" << &num2;
    return 0;
}