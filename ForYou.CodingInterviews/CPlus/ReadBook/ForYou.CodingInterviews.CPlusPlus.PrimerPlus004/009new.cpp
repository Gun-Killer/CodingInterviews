#include <iostream>
#include <string>
#include <cstring>


using namespace std;


char* getName();

int main009()
{
    char* name = getName();
    cout << name << " as " << (int*)name << endl;
    delete[] name;

    
    return 0;
}


char* getName()
{
    char temp[80];

    cout << "Enter last name: ";
    cin >> temp;
    char* pn = new char[strlen(temp) + 1];

    strcpy_s(pn, strlen(temp) + 1, temp);
    return pn;
}