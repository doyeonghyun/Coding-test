#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, sum = 0;
	char s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		int a = int(s) - 48;
		sum += a;
	}

	cout << sum;

	return 0;
}
