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
	cout << "父类析构函数" << endl;
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
	cout << "子类析构函数" << endl;
	if (num == NULL)
	{
		return;
	}
	delete num;
	num = NULL;
}

int main()
{
	//此时父类析构函数必须是虚函数，否则不会调用子类析构函数
	PersonObject* man = new Man;
	delete man;
	return 0;
}