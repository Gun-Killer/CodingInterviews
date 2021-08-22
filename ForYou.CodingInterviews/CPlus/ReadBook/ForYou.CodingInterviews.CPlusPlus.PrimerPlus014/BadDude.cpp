#include "BadDude.h"

Killer::BadDude::BadDude(string f_name, string s_name, int c)
    :MyPerson14(f_name, s_name), Gunslinger(f_name, s_name, c), PokerPlayer(f_name, s_name)
{
}

void Killer::BadDude::Show()
{
    MyPerson14::Show();
    cout << Gunslinger::Draw() << endl;
    cout << PokerPlayer::Draw() << endl;
}
