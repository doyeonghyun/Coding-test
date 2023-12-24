#include <iostream>
using namespace std;
int A, B, C;

int main() {
	cin >> A >> B;
	cin >> C;
	B += C;
	if (B >= 60) {
		if (A <= 23)
			A += (B / 60);
		if (A > 23)
			A -= 24;
		B %= 60;
	}
	cout << A << " " << B;
	return 0;
}
