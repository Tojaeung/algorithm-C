#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int solution(int n) {
    // 피자 7조각
    if (n % 7 == 0) {
        return n / 7;
    }

    return (n / 7) + 1;
}