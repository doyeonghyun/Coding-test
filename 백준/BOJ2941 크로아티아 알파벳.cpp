#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char a[101];
	char b;

	cin >> a;
	int l = strlen(a);
	int cnt = 0;

	for (int i = 0; i < l; i++) {
		if (a[i] > 96 && a[i] < 123) {
			if (i + 1 < l) {
				if (a[i] == 'c') {
					if (a[i + 1] == '=' || a[i + 1] == '-') i++;
					cnt++;
				}
				else if (a[i] == 'l' || a[i] == 'n') {
					if (a[i + 1] == 'j') i++;
					cnt++;
				}
				else if (a[i] == 's' || a[i] == 'z') {
					if (a[i + 1] == '=') i++;
					cnt++;
				}
				else if (a[i] == 'd') {
					if (i + 2 < l && a[i + 1] == 'z') {
						if (a[i + 2] == '=') i += 2;
						else if (a[i + 1] == '-') i++;
						cnt++;
					} 
					else cnt++;
				}
				else cnt++;
			}
			else cnt++;
		}
	}

	cout << cnt;

	return 0;
}
