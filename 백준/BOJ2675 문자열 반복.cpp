#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, R = 0;
	char S[21];

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> S;
		int l = strlen(S);
		string P;
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < R; k++) {
				P.push_back(S[j]);
			}
		}
		cout << P << "\n";
	}

	return 0;
}
