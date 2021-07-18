#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

struct box
{
    char maker[40];
    float height;
    float width;
    float lenght;
    float volume;
};


class ReadBookExercise01
{

public:
    void test1()
    {
        //很多地方调用
        //调用频率很高
        //执行时间很短
    }

    void test2(const char* name, int times = 1);

    void iquote(int num);

    void iquote(double num);

    void iquote(string str);


    void test4a(box& b);
    void test4b(box& b);

    template<typename T>
    auto average(T a, T b) ->decltype(a + b);

    template<typename T>
    T max(T a, T b);

    template <typename T>
    T test08(T a, T b);

    template <>
    box test08<box>(box a, box b);

};

template<typename T>
auto ReadBookExercise01::average(T a, T b)->decltype(a + b)
{
    return (a + b) / 2;
}

template<typename T>
T ReadBookExercise01::max(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

template<typename T>
inline T ReadBookExercise01::test08(T a, T b)
{
    return T();
}

template<>
inline box ReadBookExercise01::test08(box a, box b)
{
    return a.volume > b.volume ? a : b;
}
