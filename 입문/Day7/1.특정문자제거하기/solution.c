#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120826
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int length = strlen(my_string);
    char* answer = (char*)malloc(length * sizeof(char));

    int idx = 0;
    for (int i = 0; i < length; i++) {
        if (my_string[i] != letter[0]) {  // letter는 포인터 변수이다.
            answer[idx++] = my_string[i];
        }
    }

    answer[idx] = NULL;

    return answer;
}
