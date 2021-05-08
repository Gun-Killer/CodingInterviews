#include <iostream>
#include <string>
using namespace std;

class EmptyObject
{
public:
	EmptyObject();
	~EmptyObject();

private:

};

EmptyObject::EmptyObject()
{
}

EmptyObject::~EmptyObject()
{
}


class NotEmptyObject
{
public:
	NotEmptyObject();
	~NotEmptyObject();

	string str;
	int num1;

private:

};

NotEmptyObject::NotEmptyObject()
{
}

NotEmptyObject::~NotEmptyObject()
{
}

int main()
{
	EmptyObject p;

	//空对象占用 1 byte 
	cout << sizeof(p) << endl;

	NotEmptyObject p2;

	cout << sizeof(p2) << endl;

	string str2;
	cout << sizeof(str2) << endl;

	return 0;
}