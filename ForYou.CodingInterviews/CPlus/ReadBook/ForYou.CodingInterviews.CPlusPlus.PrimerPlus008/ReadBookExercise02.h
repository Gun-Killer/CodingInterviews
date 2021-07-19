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

class ReadBookExercise02
{
public:
    void test01(string str, int count);

    void setCandyBar(CandyBar& cb, const char* name = "Mill", float weight = 2.85, int heat = 350);

    void showCandyBar(const CandyBar& cb);

    void test03(string& str);
};

