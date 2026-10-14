#include "labels.hpp"
#include <string>

std::string SignLabel(int value) {
    if (value > 0) {
        return "positive";
    }
    else if (value < 0) {
        return "negative";
    }
    else {
        return "zero";
    }
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) {
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
    else if (score <= 59) {
        return "fail";
    }
    else if (score <= 74) {
        return "pass";
    }
    else if (score <= 89) {
        return "good";
    }
    else {
        return "excellent";
    }
}
