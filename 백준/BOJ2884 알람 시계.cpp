#include <iostream>
using namespace std;
int H, M;

int main() {
	cin >> H >> M;
	if (M >= 45)
		M -= 45;
	else {
		if (H == 0) H = 23;
		else H -= 1;
		M += 15;
	}
	cout << H << " " << M;
	return 0;
}
