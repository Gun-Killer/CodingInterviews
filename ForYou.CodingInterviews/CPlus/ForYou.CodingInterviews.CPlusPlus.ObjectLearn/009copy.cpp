#include <iostream>
using namespace std;
#include "movie.h"

//����ڶ������·���ռ�
int main9()
{
	movie m1;
	m1.m_score = new int(10);

	cout << *m1.m_score << endl;

	movie m2(m1);
	cout << *m2.m_score << endl;

	return 0;
}