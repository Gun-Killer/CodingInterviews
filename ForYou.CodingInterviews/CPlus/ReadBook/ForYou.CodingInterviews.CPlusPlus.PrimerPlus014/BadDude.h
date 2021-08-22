#pragma once
#include "PokerPlayer.h"
#include "Gunslinger.h"

namespace Killer
{
    class BadDude :
        public PokerPlayer, public Gunslinger
    {
    public:
        BadDude(string f_name, string s_name, int c);

        virtual void Show() override;
    };
}

