#include "types.hpp"
#include <limits>
// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    return a / b;
}

double DivideAsDouble(int a, int b) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    return static_cast<double>(a) / static_cast<double>(b);
}

bool FitsInInt(long long value) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    return value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max();
}

long long SumAsLongLong(int a, int b) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    return static_cast<long long>(a) + static_cast<long long>(b);
}

