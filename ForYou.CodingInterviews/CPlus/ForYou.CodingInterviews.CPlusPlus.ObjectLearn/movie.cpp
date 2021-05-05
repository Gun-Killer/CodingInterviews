#include "movie.h"

movie::movie()
{
	cout << "empty ctor action" << endl;
}

movie::movie(movie& m)
{
	cout << "copy ctor action" << endl;
	m_title = m.getTitle();
}

string movie::getTitle()
{
	return m_title;
}

void movie::setTitle(string title)
{
	m_title = title;
}
