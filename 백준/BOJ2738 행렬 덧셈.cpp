#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N = 0; int M = 0;
	int A[101][101] = { 0 }; int B[101][101] = { 0 };

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) cin >> A[i][j];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) cin >> B[i][j];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << A[i][j] + B[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
