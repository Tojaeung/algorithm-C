#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    int son = (numer1 * denom2) + (numer2 * denom1);
    int mom = denom1 * denom2;

    int val = 0;  // 최대공약수
    for (int i = 1; i <= son; i++) {
        if ((son % i) == 0 && (mom % i) == 0) {
            val = i;
        }
    }

    answer.push_back(son / val);
    answer.push_back(mom / val);

    return answer;
}