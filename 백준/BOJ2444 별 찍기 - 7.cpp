#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = N-i-1; j > 0; j--) cout << " ";
		for (int k = 0; k < (2*i+1); k++) cout << "*";
		cout << "\n";
	}

	for (int i = N-2; i > -1; i--) {
		for (int j = N-i-1; j > 0; j--) cout << " ";
		for (int k = 0; k < (2*i+1); k++) cout << "*";
		cout << "\n";
	}

	return 0;
}
