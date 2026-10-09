#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    return (double)a / (double)b;
}

bool FitsInInt(long long value) {

    int minInt = std::numeric_limits<int>::min();
    int maxInt = std::numeric_limits<int>::max();

    if (value >= minInt && value <= maxInt) return true;
    return false;
}

long long SumAsLongLong(int a, int b) {
    return (long long)a + (long long)b;
}
