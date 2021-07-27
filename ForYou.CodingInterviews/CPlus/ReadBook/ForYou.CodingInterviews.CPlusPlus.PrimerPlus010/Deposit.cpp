#include "Deposit.h"

Deposit::Deposit(string name, string account)
    :name(name), account(account)
{
    amount = 0.0l;
}

void Deposit::deposit(float amount)
{
    this->amount += amount;
}

void Deposit::draw(float amount)
{
    this->amount -= amount;
}
