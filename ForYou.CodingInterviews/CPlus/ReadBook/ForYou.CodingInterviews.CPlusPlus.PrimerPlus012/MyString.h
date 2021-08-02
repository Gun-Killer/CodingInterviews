#pragma once
class MyString
{
private:
    int size{ 0 };
    char* str = nullptr;
    static int nums;
public:
    MyString();
    MyString(const char* input);
    MyString(const MyString& input);
    ~MyString();

    MyString& operator=(const MyString& input);
    char& operator[](int i);
    const char& operator[](int i) const;
};

