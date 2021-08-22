#pragma once
#include "MyPerson14.h"
namespace Killer
{
    class Gunslinger :
        virtual public MyPerson14
    {
    private:
        int gun_count;
    public:
        Gunslinger(string f_name, string s_name, int c);
        double Draw();
        virtual void Show() override;
    };
}

