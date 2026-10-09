#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    (void)score;
    if ((100>=score) && (score>=0)){return true;}
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
    if ((has_score==false) or (current_min>score)){return score;}
    return current_min;
}

int NextMax(bool has_score, int current_max, int score) {
    (void)has_score;
    (void)current_max;
    (void)score;
    if ((has_score==false) or (current_max<score)){return score;}
    return current_max;
}

int NextPassed(int passed, int score) {
    (void)passed;
    (void)score;
    if (score>=60){passed+=1;}
    return passed;
}

double Average(long long sum, int count) {
    (void)sum;
    (void)count;
    return static_cast<double>(sum) / count;
}

std::string Verdict(int count, int passed, int min_score) {
    (void)count;
    (void)passed;
    (void)min_score;
    if (count==0){return "empty";}
    if (passed != count){return "debt";}
    if (min_score>=90){return "excellent";}
    return "ok";
}
