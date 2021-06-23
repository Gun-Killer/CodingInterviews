#include <iostream>

using namespace std;

void test1()
{
    cout << "3 / 4 * 6 = " << 3 / 4 * 6 << endl;
    cout << "3 * 6 / 4 = " << 3 * 6 / 4 << endl;
    cout << "-------------------" << endl;
}

void test2()
{
    auto fract = 8.25f / 2.5;
    cout << typeid(fract).name() << endl;
    cout << "-------------------" << endl;
}

void test3()
{
    const float radio = 12;
    float height = 0.0f;
    cin >> height;
    cout << "Ó¢³ß: " << height / radio << endl;
    cout << "Ó¢´ç: " << height << endl;
    cout << "-------------------" << endl;
}

void test04()
{
    cout << "seconds: ";
    long seconds{0};
    cin >> seconds;
    cout << seconds << " seconds = "
        << seconds / 60 / 60 / 24 << " days, "
        << seconds % (60 * 60 * 24) / 60 / 60 << " hours, "
        << seconds % (60 * 60 * 24) % (60 * 60) / 60 << " minutes, "
        << seconds % (60 * 60 * 24) % (60 * 60) % 60 << " seconds" << endl;
    cout << "-------------------" << endl;
}

int main()
{
    test1();

    test2();

    test3();

    test04();

    return 0;
}