#pragma once
#include <string>
#include <cstring>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person();
    Person(const string& ln, const char* fn = "Heyyou");
    void Show();
    void FormalShow() const;
};

