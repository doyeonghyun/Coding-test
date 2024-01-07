#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int B; long long int ans = 0;
	string N;

	cin >> N >> B;
	int l = N.length();
	for (int i = 0; i < l; i++) {
		if (char(N[i]) >= 'A') ans += (int(N[i]) - 55) * pow(B, l - 1 - i);
		else ans += (int(N[i]) - 48) * pow(B, l - 1 - i);
	}

	cout << ans;

	return 0;
}
