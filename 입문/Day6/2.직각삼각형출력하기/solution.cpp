#include <iostream>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/120823
int main(void) {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
        // cout << endl;
    }
    return 0;
}