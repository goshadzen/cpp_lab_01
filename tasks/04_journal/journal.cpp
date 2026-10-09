#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    return score>=0 && score<=100;
}

long long AddToSum(long long sum, int score) {
    return sum + score;
}

int NextMin(bool has_score, int current_min, int score) {
    if (!has_score){
        return score;
    }
    if (score<current_min){
        return score;
    }
    return current_min;
}

int NextMax(bool has_score, int current_max, int score) {
    if (!has_score){
        return score;
    }
    if (score>current_max){
        return score;
    }
    return current_max;
}

int NextPassed(int passed, int score) {
    if (score<60){
        return passed;
    } else{
        return passed + 1;
    }
}

double Average(long long sum, int count) {
    return (double)sum/count;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count==0){
        return "empty";
    }
    if (passed!=count){
        return "debt";
    }
    if (min_score>=90){
        return "excellent";
    }
    return "ok";
}
