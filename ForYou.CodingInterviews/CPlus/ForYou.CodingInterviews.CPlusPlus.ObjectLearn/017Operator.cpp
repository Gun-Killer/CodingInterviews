#include <iostream>
#include <string>

using namespace std;


class OperatorObject
{
public:
	OperatorObject();
	~OperatorObject();

	int num;


	OperatorObject operator+(OperatorObject& input)
	{
		OperatorObject obj;
		obj.num = num + input.num;
		return obj;
	}
private:

};

OperatorObject::OperatorObject()
{ 
	std::srand((unsigned)time(NULL));
	num = rand();
}

OperatorObject::~OperatorObject()
{
}

int main017()
{
	OperatorObject obj1;
	OperatorObject obj2;
	OperatorObject obj3 = obj1 + obj2;
	cout << obj3.num << endl;
	return 0;
}