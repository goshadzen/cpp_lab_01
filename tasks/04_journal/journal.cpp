#include "journal.hpp"

bool IsValidScore(int score) {
    return score >= 0 && score <= 100;
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
    double d_sum = sum;
    return d_sum / count;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0) {
        return "empty";
    } else if (passed != count) {
        return "debt";
    } else if (min_score >= 90) {
        return "excellent";
    } else {
        return "ok";
    }
}
