#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120838?language=c
// 질문: https://okky.kr/questions/1444893
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1000);
    memset(answer, 0, 1000);

    const char* morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.",
                           "--.", "....", "..", ".---", "-.-", ".-..",
                           "--", "-.", "---", ".--.", "--.-", ".-.", "...",
                           "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    char* cut_letter = strtok(letter, " ");

    int idx = 0;
    while (cut_letter != NULL) {
        for (int j = 0; j < 26; j++) {
            if (strcmp(cut_letter, morse[j]) == 0) {
                answer[idx++] = 97 + j;  // 1 = 49, A = 65, a = 97
                break;
            }
        }
        cut_letter = strtok(NULL, " ");
    }

    return answer;
}