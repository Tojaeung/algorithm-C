#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120840?language=c
// 질문: https://okky.kr/questions/1444884#answer-669904
int solution(int balls, int share) {
    __int128_t i, n = 1, m = 1, nm = 1;

    for (i = 1; i <= balls; i++) {
        n *= i;
    }

    for (i = 1; i <= share; i++) {
        m *= i;
    }

    for (i = 1; i <= balls - share; i++) {
        nm *= i;
    }

    return n / (nm * m);
}
