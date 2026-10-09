#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    if (score >= 0 and score <= 100) {
        return true;
    } else {
        return false;
    }
}

long long AddToSum(long long sum, int score) {
    return sum + score;
}

int NextMin(bool has_score, int current_min, int score) {
    if (has_score == false) {
        return score;
    }
    if (score < current_min) {
        return score;
    }
    return current_min;
}

int NextMax(bool has_score, int current_max, int score) {
    if (has_score == false) {
        return score;
    }
    if (score > current_max) {
        return score;
    }
    return current_max;
}

int NextPassed(int passed, int score) {
    if (score >= 60) {
        return passed + 1;
    }
    return passed;
}

double Average(long long sum, int count) {
    double n1 = sum;
    double n2 = count;
    return n1 / n2;
}

std::string Verdict(int count, int passed, int min_score) {
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
