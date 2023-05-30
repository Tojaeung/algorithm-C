#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120825?language=cpp
string solution(string my_string, int n) {
    string answer = "";

    int length = my_string.size();
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < n; j++) {
            answer += my_string[i];
        }
    }

    return answer;
}