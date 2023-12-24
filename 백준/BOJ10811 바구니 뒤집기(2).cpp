#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    int i, j = 0;
    int basket[101];

    cin >> N >> M;

    for (int k = 1; k <= N; k++)
        basket[k] = k;

    for (int k = 1; k <= M; k++) {
        cin >> i >> j;
        for (int l = i; l < j; l++) {
            swap(basket[l], basket[j]);
            j--;
        }
    }

    for (int k = 1; k <= N; k++)
        cout << basket[k] << " ";

    return 0;
}
