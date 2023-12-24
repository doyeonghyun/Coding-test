#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int cnt = 0;
    int ans[42] = { 0 };

    for (int i = 0; i < 10; i++) {
        cin >> N;
        ans[N % 42] += 1;
    }

    for (int i = 0; i < 42; i++) {
        if (ans[i] >= 1) cnt += 1;
    }

    cout << cnt;

    return 0;
}
