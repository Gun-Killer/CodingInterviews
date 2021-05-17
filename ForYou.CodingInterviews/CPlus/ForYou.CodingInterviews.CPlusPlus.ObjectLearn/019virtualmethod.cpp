#include <iostream>
#include <string>

using namespace std;

class PersonObject
{
public:
	PersonObject();
	virtual ~PersonObject() = 0;

private:

};

PersonObject::PersonObject()
{

}

PersonObject::~PersonObject()
{
	cout << "������������" << endl;
}


class Man :public PersonObject
{
public:
	Man();
	~Man();

private:
	int* num;
};

Man::Man()
{
	num = new int(10);
}

Man::~Man()
{
	cout << "������������" << endl;
	if (num == NULL)
	{
		return;
	}
	delete num;
	num = NULL;
}

int main()
{
	//��ʱ�������������������麯�������򲻻����������������
	PersonObject* man = new Man;
	delete man;
	return 0;
}