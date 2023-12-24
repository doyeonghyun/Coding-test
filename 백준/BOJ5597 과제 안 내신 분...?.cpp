#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int students[31] = { 0 };

    for (int i = 1; i <= 28; i++) {
        cin >> n;
        students[n] = i;
    }

    for (int i = 1; i <= 30; i++) {
        if (students[i] == 0) {
            cout << i << "\n";
        }
    }

    return 0;
}
