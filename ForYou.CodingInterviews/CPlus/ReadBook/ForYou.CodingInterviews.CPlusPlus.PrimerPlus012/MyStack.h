#pragma once
class MyStack
{
private:
    enum {MAX_SIZE=10};
    long* pitems;
    int size;
    int top;
public:
    MyStack(int n = MAX_SIZE);
    MyStack(const MyStack& st);
    ~MyStack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const long& item);
    bool pop(long& item);
    MyStack& operator=(const MyStack& st);
};

