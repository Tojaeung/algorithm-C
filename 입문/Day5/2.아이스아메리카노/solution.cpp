#include <string>
#include <vector>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120819
vector<int> solution(int money) {
    return vector<int>{money / 5500, money % 5500};
}
