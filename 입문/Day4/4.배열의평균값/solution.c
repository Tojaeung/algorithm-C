#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
double solution(int numbers[], size_t numbers_len) {
    int sum = 0;
    for (int i = 0; i < numbers_len; i++) {
        sum += numbers[i];
    }

    double answer = (double)sum / (double)numbers_len;

    return answer;
}