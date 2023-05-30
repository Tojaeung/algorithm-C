#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120824?language=cpp
vector<int> solution(vector<int> num_list) {
    vector<int> answer;

    int even = 0, odd = 0;
    for (int i = 0; i < num_list.size(); i++) {
        int num = num_list[i];
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    answer.push_back(even);
    answer.push_back(odd);

    return answer;
}

vector<int> solution2(vector<int> num_list) {
    vector<int> answer(2, 0);  // 2개 사이즈 0으로 초기화

    for (int i = 0; i < num_list.size(); i++) {
        int num = num_list[i];
        if (num % 2 == 0) {
            answer[0]++;  // 0으로 초기화 했으니 인덱스 접근 가능
        } else {
            answer[1]++;  // 0으로 초기화 했으니 인덱스 접근 가능
        }
    }

    return answer;
}