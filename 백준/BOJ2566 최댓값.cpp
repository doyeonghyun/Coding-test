#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a[9][9] = { 0 };

	for (int i = 0; i < 9; i++) {
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4] 
			>> a[i][5] >> a[i][6] >> a[i][7] >> a[i][8];
	}

	int max = a[0][0];
	int b = 0; int c = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				b = i; c = j;
			}
		}
	}

	cout << max << "\n" << b+1 << " " << c+1;

	return 0;
}
