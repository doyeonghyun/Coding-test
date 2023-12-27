#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char A[4], B[4];
	string a, b;

	cin >> A >> B;
	
	for (int i = 2; i > -1; i--) {
		a += A[i];
		b += B[i];
	}

	a > b ? cout << a : cout << b;

	return 0;
}
