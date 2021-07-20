#pragma once
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

struct CandyBar
{
    string name;
    float weight;
    int heat;
};

struct stringy
{
    char* str;
    int ct;
};

class ReadBookExercise02
{
public:
    void test01(string str, int count);

    void setCandyBar(CandyBar& cb, const char* name = "Mill", float weight = 2.85, int heat = 350);

    void showCandyBar(const CandyBar& cb);

    void test03(string& str);

    void test04_set(stringy& beany, char* testing);
    void test04_show(stringy& beany, int count = 1);
    void test04_show(char* testing, int count = 1);

    template<typename T>
    T test05Max5(T arr[]);


    template<typename T>
    T test06MaxN(T* arr, int size);

    template<>
    char* test06MaxN(char** arr, int size);


    template<typename T, typename Result>
    Result test07SumArray(T arr[], int size);

    template<>
    long test07SumArray(CandyBar arr[], int size);
};

template<typename T>
inline T ReadBookExercise02::test05Max5(T arr[])
{
    T res = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (res < arr[i])
        {
            res = arr[i];
        }
    }
    return res;
}

template<typename T>
inline T ReadBookExercise02::test06MaxN(T* arr, int size)
{

    T res = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (res < arr[i])
        {
            res = arr[i];
        }
    }
    return res;
}

template<>
inline char* ReadBookExercise02::test06MaxN(char** arr, int size)
{

    auto len = strlen(arr[0]);
    auto res = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (len < strlen(arr[i]))
        {
            res = arr[i];
            len = strlen(arr[i]);
        }
    }

    return res;
}

template<typename T, typename Result>
inline Result ReadBookExercise02::test07SumArray(T arr[], int size)
{
    Result res{};

    for (int i = 0; i < size; i++)
    {
        res = res + arr[i];
    }

    return res;
}

template<>
inline long ReadBookExercise02::test07SumArray(CandyBar arr[], int size)
{
    long res{};

    for (int i = 0; i < size; i++)
    {
        res = res + arr[i].heat;
    }

    return res;
}
