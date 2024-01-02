#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char subject[51]; char grade[3];
	double score = 0; double sum = 0; double ans = 0;
	for (int i = 0; i < 20; i++) {
		cin >> subject >> score >> grade;
		if (grade[0] != 'P') {
			if (grade[0] != 'F') {
				if (grade[1] == '+') sum += (4 - (grade[0] - 'A') + 0.5) * score;
				else sum += (4 - (grade[0] - 'A')) * score;
			}
			ans += score;
		}
	}

	cout << sum / ans;

	return 0;
}
