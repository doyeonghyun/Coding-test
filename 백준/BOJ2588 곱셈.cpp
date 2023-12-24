#include <iostream>
using namespace std;

int a, b;

int main() {
	cin >> a;
	cin >> b;

	int first = a * (b % 10);
	int second = a * ((b % 100) / 10);
	int third = a * (b / 100);
	int ans = first + (second * 10) + (third * 100);

	cout << first << endl;
	cout << second << endl;
 	cout << third << endl;
	cout << ans;

	return 0;
}
