#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120834?language=cpp
string solution(int age) {
    string answer = "";

    string str = to_string(age);
    for (int i = 0; i < str.size(); i++) {
        answer += str[i] + 49;
    }

    return answer;
}