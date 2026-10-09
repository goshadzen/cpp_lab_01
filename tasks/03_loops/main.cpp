#include <iostream>
#include <string>
#include <cstdio>

#ifdef _WIN32
#include <windows.h>
#endif

// Прочитать n, затем n целых чисел.
// Напечатать сумму, минимум, максимум и число строго положительных.
// Формат вывода уже собран ниже, менять его не нужно.
// n в тестах всегда >= 0. При n == 0 чисел дальше нет.


static void write_raw(const std::string& s) {
#ifdef _WIN32
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD written = 0;
    WriteFile(h, s.data(), static_cast<DWORD>(s.size()), &written, nullptr);
#else
    std::fwrite(s.data(), 1, s.size(), stdout);
    std::fflush(stdout);
#endif
}

int main() {
    int n = 0;
    if (!(std::cin >> n)) {
        return 0;
    }

    long long sum = 0;
    int positive = 0;
    bool has_value = false;
    int min_value = 0;
    int max_value = 0;

    for (int i = 0; i < n; ++i) {
        int value = 0;
        if (!(std::cin >> value)) {
            break;
        }
        sum += value;
        if (value > 0) {
            positive++;
        }
        if (!has_value) {
            min_value = value;
            max_value = value;
            has_value = true;
        } else {
            min_value = std::min(min_value, value);
            max_value = std::max(max_value, value);
        }
    }

    std::string out;
    out += "sum: " + std::to_string(sum) + '\n';
    if (!has_value) {
        out += "min: none\n";
        out += "max: none\n";
    } else {
        out += "min: " + std::to_string(min_value) + '\n';
        out += "max: " + std::to_string(max_value) + '\n';
    }
    out += "positive: " + std::to_string(positive) + '\n';

    write_raw(out);
    return 0;
}