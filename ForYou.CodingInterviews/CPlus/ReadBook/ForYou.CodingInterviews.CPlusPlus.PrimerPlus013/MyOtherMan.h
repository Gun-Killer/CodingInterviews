#pragma once
#include "MyMan.h"
namespace Killer
{
    class MyOtherMan :public MyMan
    {
    public:
        MyOtherMan(string arg_name, int arg_age)
            :MyMan(arg_name, arg_age)
        {

        };

        void setAge(int arg_age) override;
    };
}

