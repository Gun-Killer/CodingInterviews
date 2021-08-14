#include "MyMan.h"

Killer::MyMan::~MyMan()
{
}

void Killer::MyMan::setAge(int age)  
{
    cout << "man" << endl;
    MyPerson::setAge(age);
}
