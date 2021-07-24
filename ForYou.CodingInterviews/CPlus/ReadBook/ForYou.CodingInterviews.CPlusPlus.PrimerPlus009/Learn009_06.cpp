#include <iostream>
#include <new>
using std::cout;
using std::endl;


void other();
void another();

int x = 10;
int y;


struct chaff
{
    char dross[20];
    int slag;
};

char buffer2[300];

int main()
{

    cout << x << endl;
    {
        int x = 4;
        cout << x << endl;
        cout << y << endl;
    }
    other();
    another();

    chaff* chaff_p1 = ::new(buffer2) chaff;
    chaff* chaff_p2 = new chaff;
    delete chaff_p2;
    return 0;
}

void other()
{
    int y = 1;
    cout << "Other: " << x << ", " << y << endl;
}