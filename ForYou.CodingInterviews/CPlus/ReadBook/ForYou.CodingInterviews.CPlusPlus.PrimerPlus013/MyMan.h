#pragma once
#include "MyPerson.h"

namespace Killer
{
    class MyMan : public MyPerson
    {
    public:
        MyMan(string arg_name, int arg_age)
            :MyPerson(arg_name, arg_age)
        {

        }
    };
}