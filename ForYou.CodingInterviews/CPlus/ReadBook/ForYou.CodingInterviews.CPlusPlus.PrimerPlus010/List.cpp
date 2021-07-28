#include "List.h"

List::List()
{
    size = 0;
    items = nullptr;
    index = 0;
}

List::List(int size)
{
    this->size = size;
    items = new Item[this->size];
    index = 0;
}

bool List::isEmpty()
{
    return size == 0;
}

bool List::canAdd()
{
    return index < size;
}

void List::add(Item m)
{
    if (canAdd() == false)
    {
        return;
    }
    items[index] = m;
    index++;
}

void List::visit(void(*pf)(Item&))
{
    for (int i = 0; i < index; i++)
    {
        pf(items[i]);
    }
}

List::~List()
{
    if (items == nullptr)
    {
        return;
    }
    delete[] items;
    items = nullptr;
}
