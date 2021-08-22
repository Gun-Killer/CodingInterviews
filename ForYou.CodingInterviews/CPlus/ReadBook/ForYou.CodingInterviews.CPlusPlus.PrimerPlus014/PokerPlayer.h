#pragma once
#include "MyPerson14.h"
namespace Killer
{
    class PokerPlayer :
        virtual public MyPerson14
    {
    public:
        PokerPlayer(string f_name, string s_name);
        int Draw();
    };

}
