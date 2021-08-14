#include "MyPerson.h"

Killer::MyPerson::MyPerson(string arg_name, int arg_age)
    :name(arg_name), age(arg_age)
{

}

Killer::MyPerson::MyPerson(const MyPerson& person)
    : Killer::MyPerson::MyPerson(person.name, person.age)
{

}

void Killer::MyPerson::show()
{
    cout << "Name:\t" << name
        << "\tAge:\t" << age
        << endl;
}

void Killer::MyPerson::setAge(int age)
{
    cout << "Person" << endl;
    this->age = age;
}

Killer::MyPerson::~MyPerson()
{

}
