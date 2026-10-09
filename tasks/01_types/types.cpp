#include "types.hpp"


// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    int c = a / b;
    return c;
}

double DivideAsDouble(int a, int b) {
    float c = (float)a/(float)b;
    return c;
}

bool FitsInInt(long long value) { 
    if (value <= 2147483647 && value >= -2147483648){
        return true;
    }
    return false;
}

long long SumAsLongLong(int a, int b) {
    long long l = (long long)a + (long long)b;
    return l;
}
