#include <iostream>
using namespace std;
int A, B, C;

int main() {
	cin >> A >> B >> C;
	if (A == B)
		if (B == C)
			cout << 10000 + A * 1000;
		else
			cout << 1000 + A * 100;
	else
		if (B == C || A == C)
			cout << 1000 + C * 100;
		else
			if (A > B && A > C)
				cout << A * 100;
			else if (B > A && B > C)
				cout << B * 100;
			else cout << C * 100;
	return 0;
}
