#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class PrintMethodObject
{
public :
    void operator()(int& input)
    {
        cout << "\t" << input;
    }
};

int main()
{
    vector<int> p;
    p.push_back(1);
    p.push_back(2);
    p.push_back(2);

    p.push_back(10);
    p.push_back(12);
    p.push_back(7);

    for_each(p.begin(), p.end(), PrintMethodObject());
    cout << endl;

    replace(p.begin(), p.end(), 2, 31);
   
    for_each(p.begin(), p.end(), PrintMethodObject());

    return 0;
}