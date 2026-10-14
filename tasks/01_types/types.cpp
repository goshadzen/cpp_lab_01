#include "types.hpp"
#include <limits>

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    return double(a) / double(b);
}

bool FitsInInt(long long value) {
    return value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max();
}

long long SumAsLongLong(int a, int b) {
    return (long long)(a) + b;
}
