#pragma once
class ReferenceMethodParameter
{
public:
    void test1(int& num1, int& num2);
    void test2(int* num1, int* num2);
     int& test3();
};

