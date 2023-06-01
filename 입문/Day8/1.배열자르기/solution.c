#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120833?language=c
// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(num2 * sizeof(int));

    int idx = 0;
    for (int i = 0; i < numbers_len; i++) {
        if (num1 <= i && i <= num2) {
            answer[idx++] = numbers[i];
        }
    }

    return answer;
}