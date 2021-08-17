#pragma once
#include <valarray>
#include <string>

namespace Killer
{
    using std::valarray;
    using std::string;

    class MyStudent14
    {
    private:
        string name;
        valarray<double> scores;

    public:
        explicit MyStudent14(string name);
        MyStudent14(const MyStudent14& student);

        MyStudent14& operator=(const MyStudent14& student);
    };
}

