#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main007()
{
    string str = "12345678";

    cout << str.length() << endl;


    cout << (str.find("0") != string::npos) << endl;
    vector<int> p;
    cout << p.size() << endl;

    cout << str[1] << endl;
    cout << str.at(1) << endl;
    str[1] = 'a';
    cout << str[1] << endl;
    str.at(1) = 'b';
    cout << str.at(1) << endl;

    return 0;
}