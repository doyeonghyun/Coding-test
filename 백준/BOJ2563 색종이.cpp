#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; 
	int x = 0; int y = 0; 
	int cnt = 0;
	int square[101][101] = { 0, };

	cin >> N;
	while (N--) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				if (++square[j][k] == 1) cnt++;
			}
		}
	}


	cout << cnt;

	return 0;
}
