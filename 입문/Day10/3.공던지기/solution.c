#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120843?language=c
// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 1;
    for (int i = 0; i < (k - 1); i++) {
        answer += 2;
        if (answer > numbers_len) {
            answer -= numbers_len;
        }
    }

    return answer;
}