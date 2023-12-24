#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, v;
    int ans = 0;
    int number[100];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> number[i];
    }
    cin >> v;
    for (int i = 0; i < N; i++) {
        if (number[i] == v) ans += 1;
    }
    cout << ans;
    return 0;
}
