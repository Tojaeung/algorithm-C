#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int max = *max_element(array.begin(), array.end());

    vector<int> table(max + 1);
    for (int num : array) {
        table[num]++;
    }

    max = 0;
    int max_index = 0;
    for (int i = 0; i < table.size(); i++) {
        if (max < table[i]) {
            max = table[i];
            max_index = i;
        }
    }

    int count = 0;
    for (int i = 0; i < table.size(); i++) {
        if (max == table[i]) {
            count++;
        }
    }

    if (count != 1) {
        return -1;
    } else {
        return max_index;
    }
};
