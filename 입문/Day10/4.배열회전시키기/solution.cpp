#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    int len = numbers.size();
    vector<int> answer(len, 0);

    if (direction == "right") {
        answer[0] = numbers[len - 1];
        for (int i = 1; i < len; i++) {
            // answer.push_back(numbers[i - 1]);
            answer[i] = numbers[i - 1];
        }
    } else {
        for (int i = 0; i < (len - 1); i++) {
            // answer.push_back(numbers[i + 1]);
            answer[i] = numbers[i + 1];
        }
        answer[len - 1] = numbers[0];
    }

    return answer;
}