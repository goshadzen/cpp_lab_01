#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    return score >= 0 && score <= 100;
}

long long AddToSum(long long sum, int score) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    return sum + score;
}

int NextMin(bool has_score, int current_min, int score) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    if (!has_score) {
        return score;
    }
    return current_min < score ? current_min : score;
}
    

int NextMax(bool has_score, int current_max, int score) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    if (!has_score) {
        return score;
    }
    return current_max > score ? current_max : score;
}
   

int NextPassed(int passed, int score) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    if (score >= 60) {
        return passed + 1;
    }
    return passed;
}

double Average(long long sum, int count) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    return static_cast<double>(sum) / count;
}

std::string Verdict(int count, int passed, int min_score) {
    void(0); // Чтобы не было предупреждения о неиспользуемой переменной
    return "";
}
