#include <iostream>
#include <cmath>
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#endif

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
    int min_value = 0;
    int max_value = 0;

    for (int i = 0; i < n; ++i) {
        int value = 0;
        std::cin >> value;

        sum += value;
        if (value > 0) {
            positive += 1;
        }
        if (has_value) {
            max_value = std::max(max_value, value);
            min_value = std::min(min_value, value);
        } else {
            max_value = value;
            min_value = value;
            has_value = true;
        }
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
