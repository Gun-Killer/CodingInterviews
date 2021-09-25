#include <iostream>
#include <stddef.h>
#include <functional>

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

int main()
{

    std::cout << __cplusplus << std::endl;

    print(1, 3.5, "123", max(1, 3), 20);

    return 0;
}