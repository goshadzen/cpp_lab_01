#include <iostream>
#include <limits>

#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#endif

// Прочитать n, затем n целых чисел.
// Напечатать сумму, минимум, максимум и число строго положительных.
// Формат вывода уже собран ниже, менять его не нужно.
// n в тестах всегда >= 0. При n == 0 чисел дальше нет.
int Min(int a, int b);
int Max(int a, int b);

int main() {
    #ifdef _WIN32
        _setmode(_fileno(stdout), _O_BINARY);
    #endif
    int n = 0;
    if (!(std::cin >> n)) {
        return 0;
    }

    long long sum = 0;
    int positive = 0;
    bool has_value = false;
    int min_value = std::numeric_limits<int>::max();
    int max_value = std::numeric_limits<int>::min();

    for (int i = 0; i < n; ++i) {
        int value = 0;
        std::cin >> value;

        has_value = true;

        sum += value;

        if (value > 0) {
            positive++;
        }

        min_value = Min(min_value, value);
        max_value = Max(max_value, value);
    }

    std::cout << "sum: " << sum << '\n';
    if (!has_value) {
        std::cout << "min: none\n";
        std::cout << "max: none\n";
    } else {
        std::cout << "min: " << min_value << '\n';
        std::cout << "max: " << max_value << '\n';
    }
    std::cout << "positive: " << positive << '\n';
    return 0;
}

int Min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int Max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
