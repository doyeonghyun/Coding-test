#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A, j = 0; //j 초기화 필요
    int max = 0;

    for (int i = 0; i < 9; i++) {
        cin >> A;
        if (max < A) {
            max = A;
            j = i + 1;
        }
    }
    cout << max << "\n" << j;

    return 0;
}
