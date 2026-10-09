#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    (void)a;
    (void)b;
    return a / b;
}

double DivideAsDouble(int a, int b) {
    (void)a;
    (void)b;
    double n = a;
    return n / b;
}

bool FitsInInt(long long value) {
    (void)value;
    return value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max();
}

long long SumAsLongLong(int a, int b) {
    (void)a;
    (void)b;
    long long n = a; 
    long long i = b;
    return n + i;
}
