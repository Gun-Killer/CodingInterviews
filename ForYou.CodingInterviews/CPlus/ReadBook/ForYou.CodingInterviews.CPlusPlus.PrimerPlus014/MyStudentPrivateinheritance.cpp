#include "MyStudentPrivateinheritance.h"

MyStudentPrivateinheritance::MyStudentPrivateinheritance(string arg_name)
    :string(arg_name)
{
}

const string& MyStudentPrivateinheritance::getName() const
{
    return (const string&)(*this);
}
