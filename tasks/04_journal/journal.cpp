#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    (void)score;
    if (score >= 0 && score <= 100){
        return true;
    }
    return false;
}

long long AddToSum(long long sum, int score) {
    (void)sum;
    (void)score;
    sum += score;
    return sum;
}

int NextMin(bool has_score, int current_min, int score) {
    (void)has_score;
    (void)current_min;
    (void)score;
    if (!has_score) {
        return score;
    }
    if (score < current_min) {
        current_min = score;
    }
    return current_min;
}

int NextMax(bool has_score, int current_max, int score) {
    (void)has_score;
    (void)current_max;
    (void)score;
    if (!has_score) {
        return score;
    }
    if (score > current_max) {
        current_max = score;
    }
    return current_max;
}

int NextPassed(int passed, int score) {
    (void)passed;
    (void)score;
    if (score >= 60) {
        passed++;
    }
    return passed;
}

double Average(long long sum, int count) {
    (void)sum;
    (void)count;
    double c = count;
    return sum / c;
}

std::string Verdict(int count, int passed, int min_score) {
    (void)count;
    (void)passed;
    (void)min_score;
    if (count == 0) {
        return "empty";
    }
    if (passed != count) {
        return "debt";
    }
    if (min_score >= 90) {
        return "excellent";
    }
    return "ok";
}
