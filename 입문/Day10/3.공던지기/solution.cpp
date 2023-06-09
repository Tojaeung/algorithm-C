#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120843?language=cpp
int solution(vector<int> numbers, int k) {
    int answer = 1;
    for (int i = 0; i < (k - 1); i++) {
        answer += 2;
        if (answer > numbers.size()) {
            answer -= numbers.size();
        }
    }

    return answer;
}