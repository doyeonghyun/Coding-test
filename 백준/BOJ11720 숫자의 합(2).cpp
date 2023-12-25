#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int N, sum = 0;
    cin >> N;

    while (N--) {
        char s;
        cin >> s;
        sum += s - '0';  
    }

    cout << sum;

	return 0;
}
