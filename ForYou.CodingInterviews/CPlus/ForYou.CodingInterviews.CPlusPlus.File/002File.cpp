#include <fstream>

using namespace std;

class FileObject
{
public:
	FileObject();
	~FileObject();

	int num;
private:

};

FileObject::FileObject()
{
	num = 10;
}

FileObject::~FileObject()
{
}

int main002()
{
	ofstream outfile;
	outfile.open("123.txt", ios::out | ios::binary);

	FileObject* file = new FileObject;

	outfile.write((const char*)(file), sizeof(*file));

	outfile.close();

	return 0;
}