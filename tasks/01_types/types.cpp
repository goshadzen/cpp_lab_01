#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    double x = a;
    return x / b;
}

bool FitsInInt(long long value) {
    return value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max();
}

long long SumAsLongLong(int a, int b) {
    long long x = a;
    long long y = b;
    return x + y;
}
