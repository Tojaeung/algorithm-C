#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120837?language=cpp
int solution(int hp) {
    // 최소한의 병력
    // 장군개미 공격력 5
    // 병정개미 공격력 3
    // 일개미 공격력 1

    int answer = 0;

    answer += hp / 5;
    hp %= 5;

    answer += hp / 3;
    hp %= 3;

    answer += hp / 1;
    hp %= 1;

    return answer;
}