#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120830?language=c
int solution(int n, int k) {
    return (n * 12000) + ((k - (n / 10)) * 2000);
}