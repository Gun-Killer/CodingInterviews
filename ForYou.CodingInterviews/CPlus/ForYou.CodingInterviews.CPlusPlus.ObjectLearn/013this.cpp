#include <iostream>
#include <string>

using namespace std;

class ThisObject
{
public:
	ThisObject();

	ThisObject(int num)
	{
		this->num = num;
	}

	int num;

	ThisObject& NumAdd(int num)
	{
		this->num += num;
		return *this;
	}

	void NullPointer()
	{
		cout << "Null pointer" << endl;

		if (this == NULL)
		{
			return;
		}
		cout << num << endl;
	}

	~ThisObject();

private:

};

ThisObject::ThisObject() :num(-1)
{
}

ThisObject::~ThisObject()
{
}

int main13()
{
	ThisObject obj(101);
	obj.NumAdd(1).NumAdd(1);

	cout << obj.num << endl;

	ThisObject* obj1 = NULL;
	obj1->NullPointer();

	return 0;
}