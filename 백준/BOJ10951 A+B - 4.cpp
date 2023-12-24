#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    while (1) {
        cin >> A >> B;
        if (cin.eof() == 1) break;
        cout << A + B << "\n";
    }

    return 0;
}
