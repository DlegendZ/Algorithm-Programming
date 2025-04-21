#include <stdio.h>

int result;

int f(int n) {
	result += 1;
	if (n == 0) return 0;
	if (n == 1) return 1;
	return f(n-1) + f(n-2);
}

int main() {
	int t, n, i;
	scanf("%d", &t); getchar();
	for (i = 1; i <= t; i++) {
		scanf("%d", &n); getchar();
		result = 0;
		int recursive = f(n);
		printf("Case #%d: %d\n", i, result);
	}
	return 0;
}
