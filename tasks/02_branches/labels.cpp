#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value > 0) return "positive";
    else if (value < 0) return "negative";
    return "zero";
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) return "even";
    return "odd";
}

std::string GradeLabel(int score) {
    if (90 <= score && score <= 100) return "excellent";
    else if (75 <= score && score <= 89) return "good";
    else if (60 <= score && score <= 74) return "pass";
    else if (0 <= score && score <= 59) return "fail";
    return "invalid";
}
