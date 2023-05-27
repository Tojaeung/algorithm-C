#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int temp[1000] = {0};

    for (int i = 0; i < array_len; i++) {
        temp[array[i]]++;
    }

    int max = 0;
    int max_index = 0;
    for (int i = 0; i < 1000; i++) {
        if (max < temp[i]) {
            max = temp[i];
            max_index = i;
        }
    }

    int count = 0;
    for (int i = 0; i < 1000; i++) {
        if (max == temp[i]) {
            count++;
        }
    }

    if (count != 1)
        return -1;
    else
        return max_index;
}
