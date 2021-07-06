#include <iostream>
#include <cstring>

using namespace std;


int main008()
{
    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps = nullptr;

    cout << animal << " and ";
    cout << bird << "\n";

    cout << "Enter a kind animal: ";
    cin >> animal;

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int*)animal << endl;
    cout << ps << " at " << (int*)animal << endl;

    ps = new char[strlen(animal) + 1];
    strcpy_s(ps, strlen(animal) + 1, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int*)animal << endl;
    cout << ps << " at " << (int*)ps << endl;
    delete[] ps;
    return 0;
}