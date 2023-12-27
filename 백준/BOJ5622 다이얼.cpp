#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char s[16];
	cin >> s;
	int l = strlen(s);
	int a = 0, sum = 0;

	for (int i = 0; i < l; i++) {
		a = s[i] - 'A';
		if (a / 3 > 5  && a / 3 < 8 && a % 3 == 0) a = a / 3 + 2;
		else if (a / 3 == 8) a = a / 3 + 2;
		else a = a / 3 + 3;
		sum += a;
	}

	cout << sum;

	return 0;
}
