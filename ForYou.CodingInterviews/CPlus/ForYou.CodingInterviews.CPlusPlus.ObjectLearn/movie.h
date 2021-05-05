#pragma once
#include <iostream>
using namespace std;
#include <string>
class movie
{
public:
	movie();
	movie(movie& m);
private:
	string m_title;
public:
	string getTitle();

	void setTitle(string title);
};

