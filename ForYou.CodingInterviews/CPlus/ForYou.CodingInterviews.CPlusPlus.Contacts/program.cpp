#include <iostream>

#include "contact.h"

using namespace std;

int main()
{
	struct contactInfo contancts[1000];
	int contact_count = 0;
	while (true)
	{
		//«Â∆¡
		system("cls");
		show_operate();
		int user_input = read_input();
		switch (user_input)
		{
		case 1:
			save_contact(contancts, 1000, add_contact());
			break;
		case 2:
			delete_contanct(contancts, 1000);
			break;
		case 5:
			return 0;
		default:
			break;
		}

		system("pause");
	}

	return 0;
}