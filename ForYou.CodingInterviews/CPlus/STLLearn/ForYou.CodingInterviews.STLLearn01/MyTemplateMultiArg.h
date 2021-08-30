#pragma once

template<typename T1, typename T2>
class MyTemplateMultiArg
{
private:
    T1 num1;
    T2 num2;
};


template<typename T1 >
class MyTemplateMultiArg<T1, int>
{
private:
    T1 num1;
    int num2;
};

template<typename T1, typename T2>
class MyTemplateMultiArg<T1*, T2>
{
private:
    T1* num1;
    T2 num2;
};


template<typename T1, typename T2>
class MyTemplateMultiArg<const T1*, T2>
{
private:
    const T1* num1;
    T2 num2;
};