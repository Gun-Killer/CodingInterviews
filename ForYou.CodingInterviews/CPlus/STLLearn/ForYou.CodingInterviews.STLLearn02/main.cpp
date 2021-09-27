#include <iostream>
#include <stddef.h>
#include <functional>
#include <initializer_list>

#include "ExplicitObject.h"

using namespace std;

template<typename T>
void print(const T& first)
{
    cout << first << endl;
}

template<typename T, typename... TArgs>
void print(const T& first, const TArgs&... args)
{
    cout << first << endl;
    print(args...);
}

void init_list_test(initializer_list<int> list)
{
    for (int item : list)
    {
        cout << item << endl;
    }
}

int main()
{

    std::cout << __cplusplus << std::endl;

    print(1, 3.5, "123", max(1, 3), 20);

    init_list_test({ 1, 2, 3 });


    ExplicitObject p1(1, 2);
    ExplicitObject p2(3, 4);
    auto p3 = p1 + p2;
    return 0;
}