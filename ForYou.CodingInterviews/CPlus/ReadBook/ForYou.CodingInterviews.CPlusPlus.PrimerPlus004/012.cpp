#include <iostream>
#include <cstring>
#include <array>

using namespace std;

void learn04_01();
void learn04_02();
void learn04_03();
void learn04_04();
void learn04_07();
void learn04_08();
void learn04_10();

struct CandyBar;
struct Pizza;

int main()
{
    //learn04_01();

    //learn04_02();

    //learn04_03();

    //learn04_04();

    //learn04_07();

    //learn04_08();

    learn04_10();
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

void learn04_04()
{
    cout << "------------------------4------------------------" << endl;
    CandyBar cb[3]{
        {
            "Mocha Munch",
            2.3f,
            350
        },
        {
            "Mocha Munch",
            2.3f,
            350
        },
        {
            "Mocha Munch",
            2.3f,
            350
        }
    };
    for (int i = 0; i < 3; i++)
    {
        cout << "mrand: " << cb[i].m_mrand
            << "weight: " << cb[i].m_weight
            << "calories: " << cb[i].m_calories
            << endl;
    }
}
struct Pizza
{
    string m_company_name;
    int m_diameter;
    float m_weight;
};
void learn04_07()
{
    cout << "------------------------7------------------------" << endl;
    Pizza p;
    cout << "Enter company name: ";
    cin >> p.m_company_name;
    cout << endl;

    cout << "Enter diameter: ";
    cin >> p.m_diameter;
    cout << endl;

    cout << "Enter weight: ";
    cin >> p.m_weight;
    cout << endl;
    cout << "Pizza company name is " << p.m_company_name
        << " diameter is " << p.m_diameter
        << " weight is " << p.m_weight
        << endl;
}

void learn04_08()
{
    cout << "------------------------8------------------------" << endl;
    Pizza* p = new Pizza();

    cout << "Enter diameter: ";
    cin >> p->m_diameter;
    cout << endl;

    cout << "Enter company name: ";
    cin >> p->m_company_name;
    cout << endl;



    cout << "Enter weight: ";
    cin >> p->m_weight;
    cout << endl;
    cout << "Pizza company name is " << p->m_company_name
        << " diameter is " << p->m_diameter
        << " weight is " << p->m_weight
        << endl;
    delete p;
}

void learn04_10()
{
    cout << "------------------------10------------------------" << endl;
    array<float, 3> p;
    for (int i = 0; i < p.size(); i++)
    {
        cout << "Enter " << i << " 40M score: ";
        cin >> p[i];
    }

    float sum = 0.0f;
    for (int i = 0; i < p.size(); i++)
    {
        sum += p[i];
    }

    cout << "total score is " << sum
        << ", average score is " << sum / p.size()
        << endl;
}
