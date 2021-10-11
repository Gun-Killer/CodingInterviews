#include "MyAllocator.h"
#include <malloc.h>

void* MyAllocator::allocate(size_t size)
{
    MyObj* temp;

    if (!free_obj)
    {
        size_t init_size = CHUNK_SIZE * size;
        free_obj = temp = (MyObj*)malloc(init_size);
        for (int i = 0; i < (CHUNK_SIZE -1); i++)
        {
            temp->next = (MyObj*)((char*)temp + size);
            temp = temp->next;
        }
    }
    temp = free_obj;
    free_obj = free_obj->next;

    return temp;
}

void MyAllocator::deallocate(void* p, size_t size)
{
    ((MyObj*)p)->next = free_obj;
    free_obj = (MyObj*)p;
}
