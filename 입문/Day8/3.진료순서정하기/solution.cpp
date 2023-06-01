#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120835?language=cpp
vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    vector<int> sample = emergency;
    sort(emergency.begin(), emergency.end(), greater<>());

    int count = 1;
    for (int i = 0; i < emergency.size(); i++) {
        for (int j = 0; j < sample.size(); j++) {
            if (emergency[i] == sample[j]) {
                answer[j] = count++;
            }
        }
    }

    return answer;
}