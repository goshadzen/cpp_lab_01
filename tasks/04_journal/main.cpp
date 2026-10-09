#include "journal.hpp"

#include <cstdio>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

#ifdef _WIN32
#define NOMINMAX
#include <windows.h>
#endif

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

// Вход:
//   <имя из одного слова>
//   <n>
//   затем n целых баллов
//
// При n < 0 печатает ровно `invalid count` и возвращает 1.
// При балле вне 0..100 печатает ровно `invalid score` и возвращает 1.
// Отчёт в этих двух случаях печатать нельзя.

int main() {
    std::string name;
    int n = 0;
    if (!(std::cin >> name >> n)) {
        return 0;
    }

    if (n < 0) {
        write_raw("invalid count\n");
        return 1;
    }

    long long sum = 0;
    int min_score = 0;
    int max_score = 0;
    int passed = 0;
    bool has_score = false;

    for (int i = 0; i < n; ++i) {
        int score = 0;
        std::cin >> score;
        if (!IsValidScore(score)) {
            write_raw("invalid score\n");
            return 1;
        }
        sum = AddToSum(sum, score);
        min_score = NextMin(has_score, min_score, score);
        max_score = NextMax(has_score, max_score, score);
        passed = NextPassed(passed, score);
        has_score = true;
    }

    const int count = n;
    const int failed = count - passed;

    std::ostringstream out;
    out << "name: " << name << '\n';
    out << "count: " << count << '\n';
    out << "sum: " << sum << '\n';
    if (count == 0) {
        out << "average: n/a\n";
        out << "min: n/a\n";
        out << "max: n/a\n";
    } else {
        out << std::fixed << std::setprecision(2);
        out << "average: " << Average(sum, count) << '\n';
        out << "min: " << min_score << '\n';
        out << "max: " << max_score << '\n';
    }
    out << "passed: " << passed << '\n';
    out << "failed: " << failed << '\n';
    out << "verdict: " << Verdict(count, passed, min_score) << '\n';

    write_raw(out.str());
    return 0;
}