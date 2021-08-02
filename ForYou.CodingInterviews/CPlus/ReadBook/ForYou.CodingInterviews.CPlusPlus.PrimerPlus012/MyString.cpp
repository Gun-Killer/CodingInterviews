#include "MyString.h"
#include <cstring>
int MyString::nums = 0;

MyString::MyString()
{
    size = 0;
    str = new char[1];
    str[0] = '\0';
    nums++;
}

MyString::~MyString()
{
    if (str == nullptr)
    {
        return;
    }
    delete[] str;
    str = nullptr;
    nums--;
}

MyString::MyString(const char* input)
{
    size = (int)strlen(input);
    str = new char[size + 1];
    str[size] = '\0';
    nums++;
    strcpy_s(str, size, input);
}

MyString::MyString(const MyString& input)
{
    size = input.size;
    str = new char[size + 1];
    str[size] = '\0';
    strcpy_s(str, size, input.str);
    nums++;
}

MyString& MyString::operator=(const MyString& input)
{
    size = input.size;
    str = new char[size + 1];
    str[size] = '\0';
    strcpy_s(str, size, input.str);
    nums++;
    return *this;
}

char& MyString::operator[](int i)
{
    return str[i];
}

const char& MyString::operator[](int i) const
{
    return str[i];
}
