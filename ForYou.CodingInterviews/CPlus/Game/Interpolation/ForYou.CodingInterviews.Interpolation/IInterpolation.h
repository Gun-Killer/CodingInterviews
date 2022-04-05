#pragma once
#include <vector>
template <typename T>
class IInterpolation
{
public:
    virtual T cal(const std::vector<T>& input, float proportion) = 0;
};