#include <iostream>
using namespace std;

struct Inflatable
{
    char name[20];
    float volume;
    double price;
};
int main003()
{

    Inflatable guest
    {
        "Glorious Gloria",
        1.88,
        29.99
    };

    Inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";

    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";


    return 0;
}