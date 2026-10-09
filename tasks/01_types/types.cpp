#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    double n = a;
    return n / b;
}

bool FitsInInt(long long value) {
    return value >= std::numeric_limits<int>::min() and value <= std::numeric_limits<int>::max();
}

long long SumAsLongLong(int a, int b) {
    long long n1 = a;
    long long n2 = b;
    return n1 + n2;
}
