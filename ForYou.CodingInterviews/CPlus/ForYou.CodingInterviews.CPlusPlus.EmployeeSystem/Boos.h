#pragma once
#include "Worker.h"
class Boos :
    public Worker
{
public:
    Boos(int id, string name, int did);

    void showInfo();

    string getDepartmentName();
};

