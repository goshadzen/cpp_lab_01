#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.
std::string SignLabel(int value) {
    if (value < 0) {
        return "negative";
    }
    if (value == 0) {
        return "zero";
    }
    return "positive";
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) {
        return "even";
    }
    return "odd";
}

std::string GradeLabel(int grade) {
    if (grade < 0 || grade > 100) {
        return "invalid";
    }
    if (grade <= 59) {
        return "fail";
    }
    if (grade <= 74) {
        return "pass";
    }
    if (grade <= 89) {
        return "good";
    }
    return "excellent";
}