#include <iostream>
#include <string>
#include <algorithm>
#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#endif

int main() {
#ifdef _WIN32
    _setmode(_fileno(stdout), _O_BINARY);
#endif

    int n;
    if (!(std::cin >> n)) {
        return 0;
    }

    long long sum = 0;
    int positive = 0;
    bool has_value = false;
    int min_value = 0;
    int max_value = 0;

    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        sum += val;
        if (val > 0){
            positive++;
        }
        if (!has_value){
            min_value = val;
            max_value = val;
            has_value = true;
        } else {
            if (val < min_value){
                min_value = val;
            }
            if (val > max_value){
                max_value = val;
            }
        }
    }

    std::cout << "sum: " << sum << "\n";
    if (!has_value) {
        std::cout << "min: none\n";
        std::cout << "max: none\n";
    } else {
        std::cout << "min: " << min_value << "\n";
        std::cout << "max: " << max_value << "\n";
    }
    std::cout << "positive: " << positive << "\n";
    return 0;
}
