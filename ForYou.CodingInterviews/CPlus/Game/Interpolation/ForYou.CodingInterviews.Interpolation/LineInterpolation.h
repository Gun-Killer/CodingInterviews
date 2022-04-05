#pragma once
#include "IInterpolation.h"
template <typename T>
class LineInterpolation :
    public IInterpolation<T>
{
public:
    virtual T cal(const std::vector<T>& input, float proportion);
};

template<typename T>
inline T LineInterpolation<T>::cal(const std::vector<T>& input, float proportion)
{

    if (input.size() < 1)
    {
        return T();
    }

    if (input.size() == 1)
    {
        return input[0];
    }


    return input[0] * proportion + (input[1] - input[0]) * (1.0f - proportion);
}
