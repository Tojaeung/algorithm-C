#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120831?language=cpp
int solution(int n) {
    int answer = 0;
    for (int i = 2; i <= n; i += 2) {
        answer += i;
    }

    return answer;
}