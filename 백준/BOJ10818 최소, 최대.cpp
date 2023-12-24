#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, a;
    int max = 1000000;
    int min = -1000000;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a;
        if (max >= a) max = a;
        if (min <= a) min = a;
    }

    cout << max << " " << min;

    return 0;
}
