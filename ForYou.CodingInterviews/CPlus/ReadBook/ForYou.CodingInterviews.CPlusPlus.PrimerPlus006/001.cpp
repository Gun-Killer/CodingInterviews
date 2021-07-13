#include <iostream>
#include <cctype>

using namespace std;

void learn06_02();
void learn06_03();
void learn06_04();
void learn06_05();
void learn06_09();

int main001()
{
    //learn06_02();
    //learn06_03();
    //learn06_05();
    learn06_09();
    return 0;
}

void learn06_02()
{
    cout << "***************************2**************************" << endl;
    char a = 'a';
    cout << ++a << endl;
    cout << a + 1 << endl;
}

void learn06_03()
{
    cout << "***************************3**************************" << endl;
    char ch;
    int ct1 = 0, ct2 = 0;
    while ((ch = cin.get()) != '$')
    {
        cout << ch;
        ct1++;
        if (ch = '$')
        {
            ct2++;
        }
        cout << ch;
    }

    cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
}

void learn06_04()
{
    cout << "***************************4**************************" << endl;
    int weight{ 0 };
    weight >= 115 && weight < 125;
    char ch{};
    ch == 'q' || ch == 'Q';
    int x{};
    x != 0 && x % 2 == 0 && x != 26;
    x != 0 && x % 2 == 0 && x % 26 != 0;
    isalpha(ch);

}

void learn06_05()
{
    cout << "***************************5**************************" << endl;
    int x = 9;
    cout << ((!!x) == x) << endl;
}

void learn06_09()
{
    cout << "***************************9**************************" << endl;
    int line = 0;
    char ch;
    while ((ch = cin.get()) != 'Q')
    {
        if (ch == '\n')
        {
            line++;
        }
    }

    cout << line << endl;
}
