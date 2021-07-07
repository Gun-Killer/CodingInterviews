#include<iostream>
#include <array>
#include <vector>
using namespace std;

void learn01()
{
    cout << "---------------1---------------" << endl;
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];

}


void learn02()
{
    cout << "---------------2---------------" << endl;

    array<char, 30> actor;
    array<short, 100> betsie;
    array<float, 13> chuck;
    array<long double, 64> dipsea;

}


void learn03()
{
    cout << "---------------3---------------" << endl;

    int nums[5] = { 1,3,5,7,9 };
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << "\t";
    }
    cout << endl;
}


void learn04()
{
    cout << "---------------4---------------" << endl;
    int nums[5] = { 1,3,5,7,9 };
    int event = nums[0] + nums[4];
    cout << "event is nums[0] + nums[4] = " << event << endl;
}

void learn05()
{
    cout << "---------------5---------------" << endl;
    float ideas[5] = { 1.0f };
    cout << "in iedas 2 is " << ideas[1] << endl;
}

void learn06()
{
    cout << "---------------6---------------" << endl;
    char p[] = "cheesebueger";
    cout << p << endl;
}


void learn07()
{
    cout << "---------------7---------------" << endl;
    string str = "WaldorfSalad";
    cout << str << endl;
}


void learn0809()
{
    cout << "---------------8/9---------------" << endl;
    struct  FishStruct
    {
        int type;
        int weight;
        float length;
    };
    FishStruct p{ 1,5,5.0f };
    cout << "---------------15---------------" << endl;
    FishStruct* p2 = new FishStruct{ 1,10,15.0 };

    cout << "weight is :" << p2->weight << endl;
    delete p2;
}

void learn10()
{
    cout << "---------------10---------------" << endl;
    enum Response
    {
        No = 0,
        Yes = 1,
        Maybe = 2
    };
}

void learn11()
{
    cout << "---------------11---------------" << endl;
    double ted = 10.0;
    double* tedP = &ted;
    cout << *tedP << endl;
}

void learn12()
{
    cout << "---------------12---------------" << endl;
    float treacle[10] = { 1,2,3,4,5,6,7,8,9,10 };
    float* firstP = treacle;
    cout << "first value is : " << *firstP << endl;
    cout << "last value is : " << *(firstP + 9) << endl;
}

void learn13()
{
    cout << "---------------13---------------" << endl;
    int len{ 0 };
    cout << "Enter array lenght:";
    cin >> len;
    int* p = new int[len];
    delete[]p;

    vector<int> p2(len);
}

void learn14()
{
    cout << "---------------14---------------" << endl;
    cout << (int*)"121212" << endl;
}

void learn16()
{
    cout << "---------------16---------------" << endl;
    //cin.getline() 限制接收安全长度
}

void learn17()
{
    cout << "---------------17---------------" << endl;
    const int strCount = 10;
     vector<string> p1(strCount);
     p1.push_back("1");
}

int main()
{
    learn01();

    learn02();

    learn03();

    learn04();

    learn05();

    learn06();

    learn07();

    learn0809();

    learn10();

    learn11();

    learn12();

    learn13();

    learn14();

    learn16();

    learn17();

    return 0;
}