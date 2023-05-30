#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120824?language=c
// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(2 * sizeof(int));
    answer[0] = 0;
    answer[1] = 0;

    // answer배열 0으로 초기화
    // memset(answer, 0, num_list_len * sizeof(int));

    for (int i = 0; i < num_list_len; i++) {
        int num = num_list[i];
        if (num % 2 == 0) {
            answer[0]++;
        } else {
            answer[1]++;
        }
    }

    return answer;
}