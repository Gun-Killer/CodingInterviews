#include <string>
#include <iostream>
using namespace std;


void test2()
{
    cout << "---------------" << endl;

    cout << R"(\n)" << endl;
    cout << R"+*("""(\n)+*" << endl;
}
int main002()
{
    char str1[8] = { '1','2','3','4','5','6','7','8' };// not a string
    char str2[8] = { '1','2','3','4','5','6','7','\0' };

    char str3[] = "1234567";
    string str4 = "1234567";
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;

    cout << "--------------------------" << endl;

    cout << strlen(str2) << endl;
    cout << strlen(str3) << endl;
    cout << str4.length() << endl;


    test2();

    return 0;
}
