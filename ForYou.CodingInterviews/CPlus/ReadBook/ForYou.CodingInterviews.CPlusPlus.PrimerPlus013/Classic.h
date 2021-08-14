#pragma once
#include "CD.h"
namespace Killer
{
    class Classic :
        public CD
    {
    private:
        char* name;
    public:
        Classic(char* arg_name, char* s1, char* s2, int n, double x);
        Classic(const Classic& d);
        Classic();

        void Report() const override;

        ~Classic();

        Classic& operator=(const Classic& c);
    };
}

