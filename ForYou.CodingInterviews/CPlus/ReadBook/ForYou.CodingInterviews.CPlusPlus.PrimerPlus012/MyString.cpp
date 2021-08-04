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
    release();
    nums--;
}

MyString::MyString(const char* input)
{
    this->size = (int)strlen(input);
    str = new char[this->size + 1];
    str[this->size] = '\0';
    nums++;
    strcpy_s(str, size, input);
}

void MyString::resize(int size)
{
    release();
    this->size;
    str = new char[this->size + 1];
    str[this->size] = '\0';
}

void MyString::release()
{
    size = 0;
    if (str == nullptr)
    {
        return;
    }
    delete[] str;
    str = nullptr;
}

MyString::MyString(const MyString& input)
{
    this->size = input.size;
    str = new char[this->size + 1];
    str[this->size] = '\0';
    strcpy_s(str, size, input.str);
    nums++;
}

MyString& MyString::operator=(const MyString& input)
{
    resize(input.size);
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
