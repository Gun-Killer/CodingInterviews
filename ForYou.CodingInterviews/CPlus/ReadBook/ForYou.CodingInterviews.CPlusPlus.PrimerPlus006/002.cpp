#include <iostream>
#include <cctype>

using namespace std;

void student06_01();
void student06_02();
void student06_03();
void student06_05();
void student06_06();

int main()
{
    //student06_01();
    //student06_02();
    //student06_03();
    //student06_05();
    return 0;
}

void student06_01()
{
    cout << "----------------------1------------------------" << endl;
    char ch;
    while ((ch = cin.get()) != '@')
    {
        if (islower(ch))
        {
            cout << (char)toupper(ch);
        }
        else
        {
            cout << (char)tolower(ch);
        }
    }
}

void student06_02()
{
    cout << "----------------------2------------------------" << endl;
    double nums[10];
    for (int i = 0; i < 10; i++)
    {
        while (!(cin >> nums[i]))
        {
            cin.clear();
            cin.get();
        }
    }
}

void student06_03()
{
    cout << "----------------------3------------------------" << endl;
    cout << "Please enter one of the following choices" << endl;
    cout << "c) carnivore\t\t";
    cout << "p) pianist" << endl;
    cout << "t) tree\t\t\t";
    cout << "g) game" << endl;
    cout << "f" << endl;
    cout << "Please enter a c, p, t, or g: ";
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 't':
    {
        cout << "A maple is a tree" << endl;
        break;
    }
    default:
        break;
    }
}

void student06_05()
{
    cout << "----------------------5------------------------" << endl;
    int amount{ 0 };
    while ((cin >> amount) && amount >= 0)
    {
        int temp = 5000;
        if (amount > 5000 && amount <= 15000)
        {

        }
        else if (amount > 15000 && amount <= 35000)
        {

        }
        else if (amount > 35000)
        {

        }
    }
}

void student06_06()
{
}
