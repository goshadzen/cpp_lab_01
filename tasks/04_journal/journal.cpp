#include "journal.hpp"
#include <string>
#include <algorithm>

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    return score >= 0 && score <= 100;
}

long long AddToSum(long long sum, int score) {
    return sum + score;
}

int NextMin(bool has_score, int current_min, int score) {
    if (!has_score) return score;
    return std::min(current_min, score);
}

int NextMax(bool has_score, int current_max, int score) {
    if (!has_score) return score;
    return std::max(current_max, score);
}

int NextPassed(int passed, int score) {
    if (score >= 60){
        return passed + 1;
    }
    return passed;
}

double Average(long long sum, int count) {
   return static_cast<double>(sum)/count;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0) return "empty";
    if (passed != count) return "debt";
    if (min_score >= 90) return "excellent";
    return "ok";
}
