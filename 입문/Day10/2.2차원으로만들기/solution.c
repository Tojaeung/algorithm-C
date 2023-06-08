#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120842
// 질문: https://okky.kr/questions/1446662#answer-670428
// num_list_len은 배열 num_list의 길이입니다.
int** solution(int num_list[], size_t num_list_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int rows_len = num_list_len / n;
    int** answer = (int**)malloc(sizeof(int*) * rows_len);

    for (int i = 0; i < rows_len; i++) {
        answer[i] = (int*)malloc(sizeof(int) * n);
    }

    int x = 0, y = 0;
    for (int i = 0; i < num_list_len; i++) {
        answer[x][y++] = num_list[i];

        if (y >= n) {
            y = 0;
            x++;
        }
    }

    return answer;
}