#pragma once
#include <string>
using std::string;

class Deposit
{
private:
    float amount;
    string account;
    string name;
public:
    Deposit(string name, string account);
    void deposit(float amount);
    void draw(float amount);
};

