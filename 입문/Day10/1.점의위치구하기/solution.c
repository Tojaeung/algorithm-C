#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120841
// dot_len은 배열 dot의 길이입니다.
int solution(int dot[], size_t dot_len) {
    for (int i = 0; i < dot_len; i++) {
        if (dot[0] > 0) {
            if (dot[1] > 0) {
                return 1;
            } else {
                return 4;
            }
        } else {
            if (dot[1] > 0) {
                return 2;
            } else {
                return 3;
            }
        }
    }
}