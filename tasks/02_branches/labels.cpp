#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value < 0) {
        return "negative";
    }
    else if (value == 0) {
        return "zero";
    }
    else {
        return "positive";
    }
}

std::string ParityLabel(int value) {
    int new_value = 0;
    if (value < 0) {
        new_value = -value;
    }
    new_value = value;
    if (new_value % 2 == 0) {
        return "even";
    }
    else {
        return "odd";
    }
}

std::string GradeLabel(int score) {
    if (score < 0 || score > 100) {
        return "invalid";
    }
    if (score < 60) {
        return "fail";
    }
    else if (score < 75) {
        return "pass";
    }
    else if (score < 90) {
        return "good";
    }
    else {
        return "excellent";
    }
}
