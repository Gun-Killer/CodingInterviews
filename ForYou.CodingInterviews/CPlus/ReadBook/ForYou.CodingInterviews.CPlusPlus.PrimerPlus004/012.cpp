#include <iostream>
#include <cstring>

using namespace std;

void learn04_01();
void learn04_02();
void learn04_03();

struct CandyBar;


int main()
{
    //learn04_01();

    //learn04_02();

    learn04_03();
    return 0;
}

void learn04_01()
{
    cout << "------------------------1------------------------" << endl;
    string first_name;
    string last_name;
    char grade;
    int age;
    cout << "What is your first name?";
    cin >> first_name;
    cout << endl;

    cout << "What is your last name?";
    cin >> last_name;
    cout << endl;

    cout << "What letter grade do you deserve?";
    cin >> grade;
    cout << endl;

    cout << "What is your age?";
    cin >> age;
    cout << endl;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
}


void learn04_02()
{
    cout << "------------------------2------------------------" << endl;
    char first_name[10];
    char last_name[10];

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << endl;

    cout << "Enter your last name: ";
    cin >> last_name;
    cout << endl;
    char res[22];
    strcpy_s(res, last_name);
    strcat_s(res, ", ");
    strcat_s(res, first_name);

    cout << "Here's the information in a single string: " << res << endl;
}

struct CandyBar
{
    string m_mrand;
    float m_weight;
    int m_calories;
};

void learn04_03()
{
    cout << "------------------------3------------------------" << endl;
    CandyBar snack
    {
        "Mocha Munch",
        2.3f,
        350
    };


}
