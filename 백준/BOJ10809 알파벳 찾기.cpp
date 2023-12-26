#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char S[101];
	int a[27];
	fill_n(a, 27, -1);

	cin >> S;
	int l = strlen(S);

	for (int i = 0; i < l; i++) {
		if (a[S[i] - 'a'] == -1) a[S[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << a[i] << " ";
	}

	return 0;
}
