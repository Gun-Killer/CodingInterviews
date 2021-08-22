#include "MyPerson14.h"

Killer::MyPerson14::MyPerson14(string first_name, string second_name)
{
    this->first_name = first_name;
    this->second_name = second_name;
}

void Killer::MyPerson14::Show()
{
    cout << first_name << " , " << second_name << endl;
}
