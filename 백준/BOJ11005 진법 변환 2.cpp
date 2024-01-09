#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int N = 0; int B = 0;

	cin >> N >> B;
	char n[30];
	fill_n(n, 30, '0');
	int l = 30;

	if (N == 0) {
		n[29] = '0';
		l--;
	}

	else {
		while (N > 0) {
			int re = N % B;
			if (re >= 10) n[l - 1] = re + '7';
			else n[l - 1] = re + '0';
			l--;
			N /= B;
		}
	}

	for (; l < 30; l++) cout << n[l];

	return 0;
}
