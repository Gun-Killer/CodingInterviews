#include <iostream>
using namespace std;
#include "movie.h"

void foo(movie m)
{
	cout << m.getTitle() << endl;
}
int main8()
{
	movie m1;
	m1.setTitle("2012");
	foo(m1);
	return 0;
}