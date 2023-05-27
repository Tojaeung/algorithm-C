#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = n % 2 == 0 ? n / 2 : (n / 2) + 1;
    int* answer = (int*)malloc(size * sizeof(int));

    int idx = 0;
    for (int i = 1; i <= n; i += 2) {
        answer[idx] = i;
        idx++;
    }

    return answer;
}