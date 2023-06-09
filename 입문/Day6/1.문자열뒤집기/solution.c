#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120822?language=c
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int length = strlen(my_string);
    char* answer = (char*)malloc(length * sizeof(char));

    for (int i = 0; i <= length; i++) {
        answer[i] = my_string[length - i - 1];
    }

    return answer;
}
