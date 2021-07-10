#include <iostream>
#include <string>
#include <array>
#include <cstring>

using namespace std;


void learn05_01();
void learn05_02();
void learn05_03();
void learn05_04();
void learn05_05();
void learn05_06();
void learn05_08();
void learn05_10();


int main()
{
    //learn05_01();
    //learn05_02();
    //learn05_03();
    //learn05_04();
    //learn05_06();

    //learn05_08();

    learn05_10();
    return  0;
}

void learn05_01()
{
    cout << "************************1***********************" << endl;
    int start{};
    int end{};
    cout << "Enter start: ";
    cin >> start;
    cout << endl;

    cout << "Enter end: ";
    cin >> end;
    cout << endl;
    int sum{};
    for (; start <= end; start++)
    {
        sum += start;
    }
    cout << "Sum is " << sum << endl;

}

void learn05_02()
{
    cout << "************************2***********************" << endl;
    array<long double, 3> p;
    p[0] = 1;
    p[1] = 1;
    for (int i = 1; i < p.size(); i++)
    {
        p[i] = p[i - 1] * (i + 1);
    }
    cout << p[p.size() - 1] << endl;
}

void learn05_03()
{
    cout << "************************3***********************" << endl;
    int num{};

    int sum{};
    cin >> num;
    while (num)
    {
        sum += num;
        cout << sum << endl;
        cin >> num;
    }
    cout << endl;
}

void learn05_04()
{
    cout << "************************4***********************" << endl;
    float daphne{ 100.0f };
    float cleo{ 100.0f };
    int year = 0;
    do
    {
        daphne = daphne + 100.f * 0.1f;
        cleo = cleo + cleo * 0.05f;
        year++;
    } while (cleo <= daphne);
    cout << year << " year after" << endl;
    cout << "daphne is: " << daphne << endl;
    cout << "cleo is: " << cleo << endl;
}

void learn05_05()
{
    cout << "************************5***********************" << endl;
    string months[5] = { "1","2","3","4","5" };
    int sales[5] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << months[i] << " month sale is ";
        cin >> sales[i];
    }

}

void learn05_06()
{
    cout << "************************6***********************" << endl;
    int sales[3][12]{ 0 };
    int total_sum = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 12; j++)
        {
            sales[i][j] = i * j;
            sum += sales[i][j];
        }
        cout << (i + 1) << " year sale is " << sum << endl;
        total_sum += sum;
    }
    cout << "total sale  is " << total_sum << endl;
}

void learn05_08()
{
    cout << "************************8***********************" << endl;
    cout << "Enter words (to stop, type the word done)" << endl;
    char p[20];
    cin >> p;
    while (strcmp(p, "done") != 0)
    {
        //cout << p << " ";
        cin >> p;
    }
    cout << endl;
}

void learn05_10()
{
    cout << "************************10***********************" << endl;
    cout << "Enter rows num" << endl;
    int rows{};
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << '.';
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << '*';
        }

        cout << endl;
    }
}
