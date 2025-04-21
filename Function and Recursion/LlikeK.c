#include <stdio.h>

long long int a(int n, long long int x, long long int y) {
	if (n == 0) return x;
	if (n == 1) return y;
	return 	a(n-1, x, y) - a(n-2, x, y);
}

int main() {
	int t, n, i;
	long long int x, y;
	scanf("%d", &t); getchar();
	for (i = 1; i <= t; i++) {
		scanf("%d %lld %lld", &n, &x, &y); getchar();
		long long int result = a(n, x, y);
		printf("Case #%d: %lld\n", i, result);
	}
	return 0;
}
