#include "types.hpp"
#include <limits>


// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    (void)a;
    (void)b;
    return a/b;
}

double DivideAsDouble(int a, int b) {
    (void)a;
    (void)b;
    return float(a)/float(b);
}

bool FitsInInt(long long value) {
    (void)value;
    if ((std::numeric_limits<int>::min() <= value) && (value <= std::numeric_limits<int>::max())){
       return true; 
    }
    return false;
}

long long SumAsLongLong(int a, int b) {
    (void)a;
    (void)b;
    long long c = static_cast<long long>(a)+b;
    return c;
}
