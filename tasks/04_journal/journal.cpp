#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    if (score >= 0 && score <= 100){
        return true;
    }
    return false;
}

long long AddToSum(long long sum, int score) {
    sum += (long long)score;
    return sum;
}

int NextMin(bool has_score, int current_min, int score) {
    if (has_score == true){
        if (score <= current_min){
            return score;

        }
        else{
            return current_min;

        }
    }
    return score;
}

int NextMax(bool has_score, int current_max, int score) {
    if (has_score == true){
        if (score >= current_max){
            return score;
        }
        else{
            return current_max;
        }
    }
    return score;
}

int NextPassed(int passed, int score) {
    if (score >= 60){
        passed+=1;
    }
    return passed;
}

double Average(long long sum, int count) {
    double sr = (double)sum/(double)count;
    return sr;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0){
        return "empty";
    }
    if (passed != count){
        return "debt";
    }
    if (min_score >=90){
        return "excellent";
    }
    else{
        return "ok";

    }

}
