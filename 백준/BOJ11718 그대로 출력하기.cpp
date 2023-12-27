#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char a[101];

	while (1) {
		cin.getline(a, sizeof(a));
		if (cin.eof() == 1) break;
		cout << a << "\n";
	}

	return 0;
}
