#include "labels.hpp"

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

std::string GradeLabel(int score) {
    if (score < 0 || score > 100) {
        return "invalid";
    }
    if (score < 60) {
        return "fail";
    }
    if (score < 75) {
        return "pass";
    }
    if (score < 90) {
        return "good";
    }
    return "excellent";
}
