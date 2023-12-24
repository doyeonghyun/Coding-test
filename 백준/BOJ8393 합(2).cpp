#include <iostream>
using namespace std;
int n, sum;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}
