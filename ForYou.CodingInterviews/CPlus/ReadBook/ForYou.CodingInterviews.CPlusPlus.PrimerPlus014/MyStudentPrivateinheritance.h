#pragma once
#include <string>
using std::string;

class MyStudentPrivateinheritance :
    private string
{
public:
    MyStudentPrivateinheritance(string arg_name);

    const string& getName() const;
};

