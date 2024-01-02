#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; int cnt = 0;  int a[26];
	char c[101];
	fill_n(a, 26, -1);
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> c;
		int l = strlen(c);
		for (int j = 0; j < l; j++) {
			int k = c[j] - 'a';
			if (a[k] < j - 1 && a[k] != -1) break;
			else {
				a[k] = j;
				if (j == l - 1) cnt++;
			}
		}
		fill_n(a, 26, -1);
	}
	cout << cnt;

	return 0;
}
