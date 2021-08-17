#include "MyStudent14.h"

Killer::MyStudent14::MyStudent14(string name)
    :name(name), scores()
{

}

Killer::MyStudent14::MyStudent14(const MyStudent14& student)
    : name(student.name), scores(student.scores)
{

}

Killer::MyStudent14& Killer::MyStudent14::operator=(const MyStudent14& student)
{
    if (this == &student)
    {
        return *this;
    }

    name = student.name;
    scores = student.scores;

    return *this;
}
