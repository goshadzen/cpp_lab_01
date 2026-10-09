#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value > 0) {
        return "positive";
    } else if (value == 0) {
        return "zero";
    } else {
        return "negative";
    }
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
    return "";
}

std::string GradeLabel(int score) {
    if (score >= 0 && score <= 100){
        if (score < 60) {
            return "fail";
        } else if (score < 75) {
            return "pass";
        } else if (score < 90) {
            return "good";
        } else {
            return "excellent";
        } 
        } else {
            return "invalid";
    }
}
