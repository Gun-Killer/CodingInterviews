#include <iostream>
#include <string>
#include <map>

using namespace std;

int main014()
{
    map<int, string> p;
    p.insert(pair<int, string>(1, "123"));
    p.insert(make_pair(2, "789"));

    p[3] = "987";

    cout << p.find(1)->second << endl;

    cout << p[7] << endl;//���key������ ���Զ�����

    cout << p.size() << endl;

    return 0;
}