#include <iostream>
#include <string>

using namespace std;


class TargetObject1;

class FriendObject1
{
public:
	FriendObject1();
	

	void friendMethod();
	~FriendObject1();
	
	TargetObject1* obj;
};

class TargetObject1
{
	friend void FriendObject1::friendMethod();
public:
	TargetObject1()
	{
		num1 = 20;
	}
private:
	int num1;
};


FriendObject1::FriendObject1()
{
	obj = new TargetObject1;
}

void FriendObject1::friendMethod()
{

	if (obj == NULL)
	{
		return;
	}
	cout << obj->num1 << endl;
}

FriendObject1::~FriendObject1()
{
	if (obj == NULL)
	{
		return;
	}
	delete obj;
	obj = NULL;
}



int main016()
{
	FriendObject1 obj;
	obj.friendMethod();
	return 0;
}