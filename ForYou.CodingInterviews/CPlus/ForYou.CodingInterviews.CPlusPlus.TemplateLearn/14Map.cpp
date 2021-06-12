#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, string> p;
    p.insert(pair<int, string>(1, "123"));

    cout << p.find(1)->second << endl;
    cout << p.size() << endl;
    return 0;
}