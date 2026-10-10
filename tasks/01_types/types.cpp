#include "types.hpp"
#include <limits>
// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    double new_a = a;
    return new_a/b;
}

bool FitsInInt(long long value) {
    if  (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max()){
        return true;
    }
    else {
        return false;
    }
}

long long SumAsLongLong(int a, int b) {
    long long new_a = a;
    long long new_b = b;
    long long sum_ab = 0;
    sum_ab = new_a + new_b;
    return sum_ab;
}
