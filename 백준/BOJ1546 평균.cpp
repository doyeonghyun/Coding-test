#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M = 0;
    double a[1001];
    double ans = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (M < a[i]) M = a[i];
    }

    for (int i = 0; i < N; i++) {
        a[i] = a[i] / M * 100;
        ans += a[i];
    }

    cout << ans / double(N);

    return 0;
}
