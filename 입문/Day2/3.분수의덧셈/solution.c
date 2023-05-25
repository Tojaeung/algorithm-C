#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(1);

    int son = (numer1 * denom2) + (numer2 * denom1);
    int mom = denom1 * denom2;

    int val = 0;  // 최대공약수
    for (int i = 1; i <= son; i++) {
        if ((son % i) == 0 && (mom % i) == 0) {
            val = i;
        }
    }

    answer[0] = son / val;
    answer[1] = mom / val;

    return answer;
}
