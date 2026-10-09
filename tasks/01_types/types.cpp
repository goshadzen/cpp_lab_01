#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    double o = 0;
    o = a;
    return o / b;
}

bool FitsInInt(long long value) {
    if (std::numeric_limits<int>::min() <= value)
    {
        if (value <= std::numeric_limits<int>::max())
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
    else
    {
        return false;
    }
    
}

long long SumAsLongLong(int a, int b) {
    long long s = 0;
    long long a1 = 0, b1 = 0;
    a1 = a;
    b1 = b;
    s = a1 + b1;
    return s;
}
