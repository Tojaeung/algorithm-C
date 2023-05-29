#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120821?language=cpp
// 질문: https://okky.kr/questions/1442823
vector<int> solution(vector<int> num_list) {
    // vector<int> answer;
    // for (int i = 0; i < num_list.size(); i++) {
    //     answer.push_back((int)num_list.pop_back());  // int부분 유효하지 않는 형변환 ...ㅠ
    // }
    // return answer;

    reverse(num_list.begin(), num_list.end());

    return num_list;
}