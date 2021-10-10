#include <iostream>


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

int main()
{
    learn_stl_03_001_replacement_new_test();
    return 0;
}