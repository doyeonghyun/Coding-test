#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, A, B;
	int sum = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		sum = A + B;
		cout << sum << "\n";
	}

	return 0;
}
