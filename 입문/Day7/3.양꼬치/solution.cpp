#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120830?language=cpp
int solution(int n, int k) {
    return (n * 12000) + ((k - (n / 10)) * 2000);
}