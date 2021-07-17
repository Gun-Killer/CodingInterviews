#include <iostream>
using namespace std;


void learn07_04(int* start, int* end, int num);
double learn07_05(const double arr[], int size);
int learn07_08(char* str, char c1, char c2);
void learn07_09();
int learn07_11(int (*pt)(const char*));



struct applicant
{
    char name[30];
    int credit_ratings[3];
};

void learn07_12_a(applicant input);
void learn07_12_b(applicant* input);

typedef   void(*pt)(applicant*);
typedef   void(*pt1)(const applicant*, const applicant*);
typedef   void(*(*pt2)[5])(applicant*);
typedef   void(*(*pt3)[10])(const applicant*, const applicant*);


void learn07_13();
int main005()
{
    learn07_09();

    return 0;
}

void learn07_04(int* start, int* end, int num)
{
    cout << "----------------4-----------------" << endl;
    int* temp = start;
    while (temp != end)
    {
        *temp = num;
        temp++;
    }
}

double learn07_05(const double arr[], int size)
{
    cout << "----------------5-----------------" << endl;
    if (size < 1)
    {
        return 0.0;
    }
    double max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int learn07_08(char* str, char c1, char c2)
{
    cout << "----------------8-----------------" << endl;
    int count = 0;
    while (*str)
    {
        if (*str == c1)
        {
            *str = c2;
            count++;
        }
        str++;
    }
    return count;
}

void learn07_09()
{
    cout << "----------------9-----------------" << endl;
    cout << *"123" << endl;//
}

int learn07_11(int(*pt)(const char*))
{
    return pt("1111111");
}

void learn07_12_a(applicant input)
{
    cout << "----------------12-----------------" << endl;

    cout << input.name << endl;

    cout << input.credit_ratings[0] << endl;
    cout << input.credit_ratings[1] << endl;
    cout << input.credit_ratings[2] << endl;
}

void learn07_12_b(applicant* input)
{
    cout << "----------------12-----------------" << endl;

    cout << input->name << endl;

    cout << input->credit_ratings[0] << endl;
    cout << input->credit_ratings[1] << endl;
    cout << input->credit_ratings[2] << endl;
}

void learn07_13()
{
    pt p1 = learn07_12_b;
    pt ap[5];

    pt(*pa)[5];
    pa = &ap;
     
   /* applicant* temp;
     
    (*pa)[0](temp);*/
}
