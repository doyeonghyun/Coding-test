#include <bits/stdc++.h>
using namespace std;

int main() {
	char c[101];
	int a;

	cin >> c;
	int l = strlen(c);
	for (int i = 0; i < l/2; i++) {
		if (c[i] != c[l - i - 1]) {
			a = 0;
			break;
		}
		else a = 1;
	}

	cout << a;

	return 0;
}
