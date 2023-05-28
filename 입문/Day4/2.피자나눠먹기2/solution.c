#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int solution(int n) {
    // 피자 6조각
    int pizza = 1;
    while (pizza * 6 % n != 0) {
        pizza++;
    }

    return pizza;
}