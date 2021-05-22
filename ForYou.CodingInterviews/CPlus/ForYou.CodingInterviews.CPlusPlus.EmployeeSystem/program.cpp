#include <iostream>
#include "WorkerManager.h"
#include "Employee.h"

using namespace std;


int main()
{
	WorkerManager wm;

	while (true)
	{
		wm.showMenu();
		int input;
		cout << "Please Choose" << endl;
		cin >> input;
		switch (input)
		{
		case 0:
			wm.exit();
			break;
		default:
			system("cls");
			break;
		}
	}
	return 0;
}