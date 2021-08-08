#include "MyStack.h"

MyStack::MyStack(int n)
{
    pitems = new long[n] {0};
    top = n - 1;
    size = n;
}

MyStack::MyStack(const MyStack& st)
{
    size = st.size;
    top = st.size - 1;
    for (int i = st.size - 1; i >= st.top; i--)
    {
        push(st.pitems[i]);
    }
}

MyStack::~MyStack()
{
    delete[] pitems;
}

bool MyStack::isEmpty() const
{
    return top == (size - 1);
}

bool MyStack::isFull() const
{
    return top < 0;
}

bool MyStack::push(const long& item)
{
    if (isFull())
    {
        return false;
    }

    pitems[top] = item;

    top--;
    return true;
}

bool MyStack::pop(long& item)
{
    if (isEmpty())
    {
        return false;
    }

    item = pitems[top];

    top++;
    return true;
}

MyStack& MyStack::operator=(const MyStack& st)
{
    if (&st == this)
    {
        return *this;
    }

    top = size - 1;

    for (int i = st.size - 1; i >= st.top; i--)
    {
        push(st.pitems[i]);
    }

    return *this;
}
