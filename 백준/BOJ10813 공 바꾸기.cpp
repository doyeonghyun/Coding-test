#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    int basket[101];
    int i, j, k = 0;
    cin >> N >> M;
    for (int l = 1; l <= N; l++) basket[l] = l;
    for (int l = 1; l <= M; l++) {
        cin >> i >> j;
        k = basket[i];
        basket[i] = basket[j];
        basket[j] = k;
    }
    for (int l = 1; l <= N; l++) cout << basket[l] << " ";
    return 0;
}
