#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120835?language=cpp
int solution(int n) {
    int answer = 0;

    // 약수 + 1
    for (int i = 1; i <= (n / 2); i++) {
        if (n % i == 0) {
            answer++;
        }
    }

    return answer + 1;
}