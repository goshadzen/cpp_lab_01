#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    if (score >= 0 && score <= 100) {
        return true;
    }
    return false;
}

long long AddToSum(long long sum, int score) {
    sum += score;
    return sum;
}

int NextMin(bool has_score, int current_min, int score) {
    if (!has_score) {
        return score;
    }

    if (current_min < score) {
        return current_min;
    }
    return score;
}

int NextMax(bool has_score, int current_max, int score) {
    if (!has_score) {
        return score;
    }

    if (current_max > score) {
        return current_max;
    }
    return score;
}

int NextPassed(int passed, int score) {
    if (score >= 60) {
        return ++passed;
    }
    return passed;
}

double Average(long long sum, int count) {
    if (count == 0) {
        return 0;
    }
    return sum / (double)count;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0) {
        return "empty";
    }
    else if (passed != count) {
        return "debt";
    }
    else if (min_score >= 90) {
        return "excellent";
    }
    else {
        return "ok";
    }
}
