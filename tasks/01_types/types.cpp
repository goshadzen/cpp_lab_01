#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    double double_a = static_cast<double>(a);
    return double_a / b;
}

bool FitsInInt(long long value) {
    if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max()) {
        return true;
    }
    return false;
}

long long SumAsLongLong(int a, int b) {
    return static_cast<long long>(a) + b;
}
