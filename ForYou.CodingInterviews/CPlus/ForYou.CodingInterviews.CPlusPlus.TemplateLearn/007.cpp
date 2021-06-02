#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str = "12345678";

    cout << str.length() << endl;


    cout << (str.find("0") != string::npos) << endl;
    vector<int> p;
    cout << p.size() << endl;

    return 0;
}