#include "Gunslinger.h"

Killer::Gunslinger::Gunslinger(string f_name, string s_name, int c)
    :MyPerson14(f_name, s_name), gun_count(c)
{
}

double Killer::Gunslinger::Draw()
{
    return 0.0;
}

void Killer::Gunslinger::Show()
{
    MyPerson14::Show();
    cout << gun_count << endl;
}
