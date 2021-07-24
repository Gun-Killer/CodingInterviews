#pragma once

const int len = 40;
struct golf
{
    char fullName[len];
    int handicap;
};

void setGolf(golf& g, const char* name, int hc);

