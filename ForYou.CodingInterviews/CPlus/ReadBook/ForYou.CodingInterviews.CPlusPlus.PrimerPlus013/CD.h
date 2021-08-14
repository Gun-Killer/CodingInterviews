#pragma once
namespace Killer
{
    class CD
    {
    private:
        char preformers[50];
        char label[20];
        int selections;
        double playtime;
    public:
        CD(char* s1, char* s2, int n, double x);
        CD(const CD& d);
        CD();
        virtual ~CD();

        virtual void Report() const;

        CD& operator = (const CD& d);
    };
}

