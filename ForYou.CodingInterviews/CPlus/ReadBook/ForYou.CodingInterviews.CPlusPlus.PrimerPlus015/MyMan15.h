#pragma once
#include "MyPerson15.h"
namespace Killer
{
    class MyMan15 :
        public MyPerson15
    {
    public:
        MyMan15(int num_arg);
        virtual void show() override;
    };
}

