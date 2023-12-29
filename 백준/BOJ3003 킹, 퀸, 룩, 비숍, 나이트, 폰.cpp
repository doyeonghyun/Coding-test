#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[6] = { 1, 1, 2, 2, 2, 8 };
	for (int i = 0; i < 6; i++) {
		int k = 0;
		cin >> k;
		if (a[i] == k) a[i] = 0;
		else a[i] -= k;
	}

	for (int i = 0; i < 6; i++) {
		cout << a[i] << " ";
	}

	return 0;
}
