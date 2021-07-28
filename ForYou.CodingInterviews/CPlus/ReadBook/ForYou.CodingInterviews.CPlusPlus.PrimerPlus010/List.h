#pragma once
#include <iostream>

using std::cout;
using std::endl;

typedef int Item;

class List
{
private:
    int size{0};
    int index{ 0 };
    Item* items;

public:
    List();
    List(int size);
    bool isEmpty();
    bool canAdd();
    void add(Item m);
    void visit(void(*pf)(Item&));
    ~List();
};

