#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int solution(int array[], size_t array_len) {
    int i, j, temp = 0;
    for (i = 0; i < array_len; i++) {
        for (j = 0; j < (array_len - 1) - i; j++) {
            if (array[j] > array[j + 1]) {  // 버블 정렬 사용
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    return array[array_len / 2];
}
