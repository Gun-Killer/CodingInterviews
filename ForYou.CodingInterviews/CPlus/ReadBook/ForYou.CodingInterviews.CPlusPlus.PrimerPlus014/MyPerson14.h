#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace Killer
{
    class MyPerson14
    {
    private:
        string first_name;
        string second_name;
    public:
        MyPerson14(string first_name, string second_name);
        virtual void Show();
    };
}
