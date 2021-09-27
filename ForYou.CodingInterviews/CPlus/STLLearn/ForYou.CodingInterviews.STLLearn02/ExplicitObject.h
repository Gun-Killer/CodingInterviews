#pragma once
class ExplicitObject
{

private:
    int num1;
    int num2;

public:

    explicit
        ExplicitObject(int num1_arg, int num2_arg = 1)
        :num1(num1_arg), num2(num2_arg)
    {

    }

    ExplicitObject operator+(const ExplicitObject& input)
    {
        return ExplicitObject(input.num1 + this->num1, input.num2 + this->num2);
    }
};

