#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a/b;
}

double DivideAsDouble(int a, int b) {
    double c = double(a);
    return c/b;
}

bool FitsInInt(long long value) {
    return std::numeric_limits<int>::min() <= value &&
    value <= std::numeric_limits<int>::max();
}

long long SumAsLongLong(int a, int b) {
    double n = static_cast<long long>(a);
    double m = static_cast<long long>(b);
    return n+m;
}
