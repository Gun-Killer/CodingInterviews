#pragma once
#include <iostream>
using namespace std;
#include <string>
class movie
{
public:
	movie();
	movie(const movie& m);
private:
	string m_title;
	
	
public:

	int* m_score;

	string getTitle();

	void setTitle(string title);

	~movie();
};

