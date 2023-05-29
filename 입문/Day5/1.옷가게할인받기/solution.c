#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120818?language=c
// 질문: https://okky.kr/questions/1442803#answer-669260
int solution(int price) {
    if (100000 <= price & price < 300000) {
        return price * 0.95;
    } else if (300000 <= price & price < 500000) {
        return price * 0.9;
    } else if (500000 <= price) {
        return price * 0.8;
    } else {
        return price;
    }
}
