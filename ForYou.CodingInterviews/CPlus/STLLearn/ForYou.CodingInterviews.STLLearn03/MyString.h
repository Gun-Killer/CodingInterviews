#pragma once
#include <string>

class MyString
{
public:
    MyString(const char* str = 0);
    MyString(const MyString& str);
    ~MyString();
    MyString& operator=(const MyString& str);
private:
    char* m_str{nullptr};
};

