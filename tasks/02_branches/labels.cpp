#include "labels.hpp"

std::string SignLabel(int value) {
    if (value < 0) {
        return "negative";
    }
    if (value == 0) {
        return "zero";
    }
    else {
        return "positive";
    }
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) {
        return "even";
    }else {
    return "odd";
    }
}

std::string GradeLabel(int score) {
    if (score < 0 || score > 100) {
        return "invalid";
    }
    if (score <= 59) {
        return "fail";
    }
    if (score <= 74) {
        return "pass";
    }
    if (score <= 89) {
        return "good";
    }
    else {
        return "excellent";
    }

}