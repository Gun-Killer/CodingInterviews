#include <iostream>

#include "MyQueue.h"

using namespace std;

int main()
{
     MyQueue<int> q;

     q.enqueue(1);
     q.enqueue(2);
     q.enqueue(3);
     MyQueue<int> q1 = q;
     while (q.size() > 0)
     {
         cout << q.dequeue() << "\t";
     }

     
     while (q1.size() > 0)
     {
         cout << q1.dequeue() << "\t";
     }
    return 0;
}