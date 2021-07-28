#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class plorg
{
private :
    string name;
    int CI;
public:
    plorg(int ci, string name = "Plorga");
    void show();
    void setCI(int ci);
};

