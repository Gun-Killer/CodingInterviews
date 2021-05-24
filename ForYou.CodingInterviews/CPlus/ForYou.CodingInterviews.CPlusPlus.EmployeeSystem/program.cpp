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
        case 1:
            wm.add();
            break;
        case 2:
            wm.showAll();
            break;
        case 3:
            wm.remove();
            break;
        default:
            break;
        }
        system("cls");
    }
    return 0;
}