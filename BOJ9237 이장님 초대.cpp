#include <bits/stdc++.h>
using namespace std;;

int n;

int tree[100001];
int main(void)
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
		cin >> tree[i];
	sort(tree, tree + n);

	for (int i = n - 1; i >= 0; i--)
	{
		ans = max(ans, (n - i) + tree[i] + 1);
	}
	cout << ans;

	return 0;
}
