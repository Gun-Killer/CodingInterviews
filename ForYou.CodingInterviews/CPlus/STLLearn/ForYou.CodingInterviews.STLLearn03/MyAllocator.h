#pragma once

 

class MyAllocator
{
private:
    struct MyObj
    {
        struct MyObj* next;
    };

    MyObj* free_obj{ nullptr };
    const int CHUNK_SIZE{ 20 };
public:
    void* allocate(size_t);
    void deallocate(void*, size_t);

};

