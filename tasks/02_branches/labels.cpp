#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value < 0) {
        return "negative";
    }else if (value == 0) {
        return "zero";
    }else {
        return "positive";
    }
    return 0;
}

std::string ParityLabel(int value) {
    if (value >= 0) {
        if (value % 2 == 0) {
            return "even";
        }
    }else{
        if ((value * -1) % 2 == 0){
            return "even";
        }
    }
    return "odd";
}

std::string GradeLabel(int score) {
    if (0 <= score && score <= 59) {
        return "fail";
    }else if (60 <= score && score <=74) {
        return "pass";
    }else if (75 <= score && score <= 89) {
        return "good";
    }else if (90 <= score && score <= 100){
        return "excellent";
    }
    return "invalid";
}
