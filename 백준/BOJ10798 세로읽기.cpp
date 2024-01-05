#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char a[6][16] = { '\0', };
	char word[16];

	for (int i = 0; i < 5; i++) {
		cin >> word;
		int l = strlen(word);
		for (int j = 0; j < l; j++) {
			a[i][j] = word[j];
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[j][i] != '\0') cout << a[j][i];
		}
	}

	return 0;
}
