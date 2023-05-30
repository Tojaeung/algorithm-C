#include <stdio.h>

// https://school.programmers.co.kr/learn/courses/30/lessons/120823?language=c
int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}