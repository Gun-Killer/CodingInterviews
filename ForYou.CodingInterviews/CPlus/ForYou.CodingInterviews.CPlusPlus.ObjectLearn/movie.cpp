#include "movie.h"

movie::movie()
{
	cout << "empty ctor action" << endl;
}

movie::movie(const movie& m)
{
	cout << "copy ctor action" << endl;
	m_title = m.m_title;
	m_score = new int(*m.m_score);
}
movie::~movie()
{
	if (m_score != NULL)
	{
		delete m_score;
		m_score = NULL;
	}
}
string movie::getTitle()
{
	return m_title;
}

void movie::setTitle(string title)
{
	m_title = title;
}
