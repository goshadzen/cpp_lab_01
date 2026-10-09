#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    if (score <= 100 && score >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

long long AddToSum(long long sum, int score) {
    return sum + score;
}

int NextMin(bool has_score, int current_min, int score) {
    if (has_score)
    {
        if (score < current_min)
        {
            current_min = score;
            return current_min;
        }
        else
        {
            return current_min;
        }
        
    }
    else
    {
        return score;
    }
}

int NextMax(bool has_score, int current_max, int score) {
    if (has_score)
    {
        if (score > current_max)
        {
            current_max = score;
            return current_max;
        }
        else
        {
            return current_max;
        }
        
    }
    else
    {
        return score;
    }
}

int NextPassed(int passed, int score) {
    if (score >= 60)
    {
        passed++;
        return passed;
    }
    else
    {
        return passed;
    }
    
}

double Average(long long sum, int count) {
    double avg = 0;
    avg = sum;
    return avg / count;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0)
    {
        return "empty";
    }

    else if (passed != count)
    {
        return "debt";
    }

    else if (min_score >= 90)
    {
        return "excellent";
    }

    else
    {
        return "ok";
    }
}
