#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    int box[101] = { 0 };
    int i, j, k = 0;

    cin >> N >> M;
    for (int l = 1; l <= M; l++) {
        cin >> i >> j >> k;
        for (; i <= j; i++) { // for(i; i<=j; i++)로 작성하면 i 그대로 사용하기 때문에 효과가 없다. statement has no effect
            box[i] = k;
        }
    }

    for (int l = 1; l <= N; l++) cout << box[l] << " ";
    return 0;
}
