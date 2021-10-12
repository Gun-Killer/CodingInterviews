#pragma once
#include <iostream>
#include "MyAllocator.h"

class MyFoo
{
private:
    int num{ 0 };
public:
    static MyAllocator inner_allocator;

    static void* operator new(size_t size)
    {
        std::cout << "new jj" << std::endl;
        return inner_allocator.allocate(size);
    }

    static void operator delete(void* p, size_t size)
    {
        std::cout << "delete jj" << std::endl;
        inner_allocator.deallocate(p, size);
    }
};