#include <stdio.h>

int m;

int f(int n) {
	if (n == 0) return 1;
	if (n == 1) return 2;
	if (n%3 == 0) ++m;
	if (n%5 == 0) return n*2;
	return f(n-1) + n + f(n-2) + n-2;
	
}

int main() {
	int t, i, n, result;
	
	scanf("%d", &t); getchar();
	
	for (i = 1; i <= t; i++) {
		scanf("%d", &n); getchar();
		m = 0;
		result = f(n);
		printf("Case #%d: %d %d\n", i, result, m);
	}
	return 0;
}
