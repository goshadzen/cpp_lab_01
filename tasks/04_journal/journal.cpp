#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    return 0 <= score && score <= 100;
}

long long AddToSum(long long sum, int score) {
    return score + sum;
}

int NextMin(bool has_score, int current_min, int score) {
    if (!has_score){
        current_min = score;
    } else {
        if (score < current_min)
            current_min = score;
    } return current_min;
}

int NextMax(bool has_score, int current_max, int score) {
    if (!has_score){
        current_max = score;
    } else {
        if (score > current_max)
            current_max = score;
    } return current_max;
}

int NextPassed(int passed, int score) {
    return passed + (score >= 60);
}

double Average(long long sum, int count) {
    if (!count)
        return 0.0;
    return sum / double(count);
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0)
        return "empty";
    if (passed != count)
        return "debt";
    if (min_score >= 90)
        return "excellent";
    else
        return "ok";
}


