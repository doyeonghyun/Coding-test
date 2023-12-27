#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char c[1000001];
	char* ptr;
	int a = 0;

	cin.getline(c, sizeof(c));

	ptr = strtok(c, " ");

	while (ptr != nullptr) {
		if (ptr != nullptr) a += 1;
		ptr = strtok(nullptr, " ");
	}
	cout << a;

	return 0;
}
