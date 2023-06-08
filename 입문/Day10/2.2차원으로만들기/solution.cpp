#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    int row_len = num_list.size() / n;
    vector<vector<int>> answer(row_len, vector<int>(n, 0));

    int idx = 0;
    for (int i = 0; i < row_len; i++) {
        for (int j = 0; j < n; j++) {
            answer[i][j] = num_list[idx++];
        }
    }

    return answer;
}