#include <bits/stdc++.h>
using namespace std;;

int n;

int main() {
	cin >> n;
	if (n % 2 == 0) {
		while (n > 0) {
			if (n % 2 == 0) {
				cout << 1 << ' ';
			}
			else {
				cout << 2 << ' ';
			}
			n -= 1;
		}
	}
	
	else {
		while (n > 1) {
			if (n % 2 == 1) {
				cout << 1 << ' ';
			}
			else {
				cout << 2 << ' ';
			}
			n -= 1;
		}
		cout << 3;
	}
	return 0;
}
