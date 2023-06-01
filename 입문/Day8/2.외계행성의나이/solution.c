#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120834?language=c
char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(4 * sizeof(char));

    // int형을 문자열로 변환
    sprintf(answer, "%d", age);
    for (int i = 0; i < strlen(answer); i++) {
        answer[i] += 49;
    }

    return answer;
}