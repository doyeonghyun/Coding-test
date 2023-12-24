#include <cstdio>
int n, sum;

int main() {
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
