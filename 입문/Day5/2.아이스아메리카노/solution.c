#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(8);

    // 커피값 5500원
    int coffee = money / 5500;
    answer[0] = coffee;
    answer[1] = money - (coffee * 5500);

    return answer;
}