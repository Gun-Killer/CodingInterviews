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
        case 4:
            wm.update();
            break;
        case 5:
            wm.find();
            break;
        case 6:
            wm.sortById();
            break;
        case 7:
            wm.clear();
            break;
        default:
            break;
        }
        system("cls");
    }
    return 0;
}