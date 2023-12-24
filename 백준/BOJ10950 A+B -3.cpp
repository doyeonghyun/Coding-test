#include <cstdio>
int T, A, B;

int main() {
	scanf("%d \n", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;
}
