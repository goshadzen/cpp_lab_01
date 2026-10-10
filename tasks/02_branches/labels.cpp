#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value > 0) {
        return "positive";
    } else if (value < 0) {
        return "negative";
    } else {
        return "zero";
    }
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}

std::string GradeLabel(int score) {
    if (score >= 90) {
        return "A";
    } else if (score >= 80) {
        return "B";
    } else if (score >= 70) {
        return "C";
    } else if (score >= 60) {
        return "D";
    } else {
        return "F";
    }
}
