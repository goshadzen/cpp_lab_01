#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if(value<0){
        return "negative";
    }
    if(value==0){
        return "zero";
    }
    else{
        return "positive";
    }
}

std::string ParityLabel(int value) {
    if (value%2==0){
        return "even";
    }
    else{
        return "odd";
    }
}

std::string GradeLabel(int score) {
    if(score<0 or score>100){
        return "invalid";
    }
    if (score<60) {
        return "fail";
    }
    if (score<75) {
        return "pass";
    }
    if (score<90) {
        return "good";
    }
    else {
        return "excellent";
    }
}
