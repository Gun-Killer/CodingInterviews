#include <iostream>
#include <string>

using namespace std;
class FriendMethdoObject
{ 

	//friend 关键字可以让全局函数访问私有成员
	friend void friendMethod(FriendMethdoObject& obj);
public:
	FriendMethdoObject();
	~FriendMethdoObject();

private:
	int num1;

	void method()
	{
		cout << "action" << endl;
	}
};

FriendMethdoObject::FriendMethdoObject()
{
	num1 = 10;
}

FriendMethdoObject::~FriendMethdoObject()
{
}

void friendMethod(FriendMethdoObject& obj) 
{
	cout << obj.num1 << endl;
	obj.method();
}

int main() 
{

	FriendMethdoObject obj;

	friendMethod(obj);

	return 0;
}