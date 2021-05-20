#include <fstream>
using namespace std;

class FileObject1
{
public:
	FileObject1();
	~FileObject1();

	int num;
private:

};

FileObject1::FileObject1()
{
	 
}

FileObject1::~FileObject1()
{
}
int main()
{
	ifstream readFile;

	readFile.open("123.txt", ios::in || ios::binary);

	if (readFile.is_open() == false)
	{
		return 0;
	}

	FileObject1* p = new FileObject1;

	readFile.read((char*)p, sizeof(*p));

	readFile.close();

	return 0;
}