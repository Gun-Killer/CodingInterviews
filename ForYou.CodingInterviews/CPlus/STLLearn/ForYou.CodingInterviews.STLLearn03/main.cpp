#include <iostream>
#include "MyFoo.h"
#include <vector>
#include "MyString.h"

using namespace std;

void learn_stl_03_001_replacement_new_test()
{
    int* p = new int(10);

    int* p1 = new(p) int(13);

    cout << "address:" << p1 << " : " << *p1 << endl;
    cout << "address:" << p << " : " << *p << endl;



    //void* p2 = ::operator new(sizeof(int), p);
    //int* p3 = static_cast<int*>(p2);
    //p3->int::int(150);

    delete p;
}

std::vector<char> test0001(long long num)
{
    std::vector <char> v({ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9','A', 'B', 'C', 'D', 'E', 'F' });
    std::vector <char> v1;
    if (num < 16)
    {
        v1.push_back(v[num]);


        return v1;
    }

    long long temp = num;
    while (temp > 0)
    {
        auto num1 = temp % 16;
        auto num2 = temp / 16;
        temp = num2;
        v1.push_back(v[num1]);
        if (temp < 16)
        {
            v1.push_back(v[temp]);
            temp = 0;
        }
    }
    std::reverse(v1.begin(), v1.end());

    return v1;
}

int main()
{
    learn_stl_03_001_replacement_new_test();

    MyFoo* p = new MyFoo();
    delete p;

    auto num1 = test0001(496464646452112100);
    std::cout << "OX";

    for (auto item : num1)
    {
        std::cout << item;
    }



    return 0;
}