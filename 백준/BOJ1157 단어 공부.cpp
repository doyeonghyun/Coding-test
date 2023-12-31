#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string c;
	int a[26] = { 0 };
	int max = 0;
	char r;

	cin >> c;

	for (int i = 0; i < c.length(); i++) {
		if (c[i] > 64 && c[i] < 91) a[c[i] - 'A'] += 1;
		if (c[i] > 96 && c[i] < 123) a[c[i] - 'a'] += 1;
	}


	for (int i = 0; i < 26; i++) {
		if (a[i] != 0) {
			if (a[i] == max) r = '?';
			else if (a[i] != 0 && a[i] > max) {
				max = a[i];
				r = char(i + 'A');
			}
		}
	}

	cout << r;
}
