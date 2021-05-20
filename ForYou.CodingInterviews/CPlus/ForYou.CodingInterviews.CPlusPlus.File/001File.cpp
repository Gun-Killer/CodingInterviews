#include <iostream>
#include <fstream>

using namespace std;

int main001()
{
	ofstream outfile;
	outfile.open("123.txt", ios::out);
	outfile.write("121", 3);
	outfile << 10000;
	outfile << 10001 << endl;
	outfile << 10002;
	outfile.close();
	return 0;
}