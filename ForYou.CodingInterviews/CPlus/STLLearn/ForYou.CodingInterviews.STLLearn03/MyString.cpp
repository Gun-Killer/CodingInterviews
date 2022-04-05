#include "MyString.h"

MyString::MyString(const char* str)
{
    if (str)
    {
        size_t len = std::strlen(str);
        m_str = new char[len + 1];
        strcpy_s(m_str, len + 1, str);
    }
    else
    {
        m_str = new char[1];
        m_str[0] = '\0';
    }
}

MyString::MyString(const MyString& str)
    :MyString(str.m_str)

{

}

MyString::~MyString()
{
    delete[] m_str;
}

MyString& MyString::operator=(const MyString& str)
{
    if (this == &str)
    {
        return *this;
    }
    delete[] m_str;
    size_t len = std::strlen(str.m_str);
    m_str = new char[len + 1];
    strcpy_s(m_str, len + 1, str.m_str);
}
