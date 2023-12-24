#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        string blank(N-i, ' ');
        string stars(i, '*');
        cout << blank << stars << "\n";
    }

    return 0;
}
