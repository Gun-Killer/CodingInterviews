#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

namespace Killer
{
    class MyPerson
    {
    private:
        string name;
        int age;
    public:
        MyPerson(string arg_name, int arg_age);

        MyPerson(const MyPerson& person);

        void show();


        virtual void setAge(int age);

        virtual ~MyPerson();
    };
}