#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> s;
        cout << s[0] << s[s.length() - 1] << "\n";
    }

    return 0;
}
