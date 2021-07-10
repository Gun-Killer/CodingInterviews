#include <iostream>
#include <string>


using namespace std;


void learn01();
void learn03();
void learn04();
void learn05();
void learn06();
void learn08();
int main003()
{
    learn01();

    learn03();

    learn04();

    learn05();

    learn06();

    learn08();
    return 0;
}

void learn01()
{
    cout << "************************1***********************" << endl;
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
}


void learn03()
{
    cout << "************************3***********************" << endl;
    int j;
    for (j = 0; j < 11; j += 3)
    {
        cout << j;
    }
    cout << endl << j << endl;
}

void learn04()
{
    cout << "************************4***********************" << endl;
    int j = 5;
    while (++j < 9)
    {
        cout << j++ << endl;
    }

}
void learn05()
{
    cout << "************************5***********************" << endl;
    int k = 8;
    do
    {
        cout << "k = " << k << endl;
    } while (k++ < 5);
}

void learn06()
{
    cout << "************************6***********************" << endl;
    int start = 1;
    while (start <= 64)
    {
        cout << start << "\t";
        start *= 2;
    }
    cout << endl;
}

void learn08()
{
    cout << "************************8***********************" << endl;
    int x = (1, 024);
    cout << "x = " << x << endl;

   /* int y = 1, 024;  //error
    cout << "y = " << y << endl;*/
}