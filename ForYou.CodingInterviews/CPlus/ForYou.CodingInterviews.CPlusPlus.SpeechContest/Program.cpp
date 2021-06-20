#include <iostream>

#include "SpeechManager.h"

using std::cout;

int main()
{

    while (true)
    {
        SpeechManager speedManager;
        speedManager.showMenu();

        cout << "ÇëÑ¡Ôñ" << std::endl;
        int num;
        std::cin >> num;
        switch (num)
        {
        case 1:
            speedManager.start();
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            speedManager.exit();
            break;
        default:
            break;
        }
    }


    return 0;
}