#include <iostream>
#include <string>

using namespace std;


class TargetObejct
{
	friend class FriendObejct;
public:
	TargetObejct();
	~TargetObejct();

private:
	int num1;
};

TargetObejct::TargetObejct()
{
	num1 = 10;
}

TargetObejct::~TargetObejct()
{
}


class FriendObejct
{
public:
	FriendObejct();
	~FriendObejct();

	void show();
private:

};


FriendObejct::FriendObejct()
{
}

void FriendObejct::show() {
	TargetObejct obj;
	cout << obj.num1 << endl;
}

FriendObejct::~FriendObejct()
{
}

int main15()
{

	FriendObejct obj;
	obj.show();
	return 0;
}