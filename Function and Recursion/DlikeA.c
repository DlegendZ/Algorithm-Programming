#include <stdio.h>

int F(int n) {
	if (n == 1) return 1;
	if (n%2 == 0) return F(n/2);
	else return F(n-1) + F(n+1);
}

int main() {
	int t, i, n;
	scanf("%d", &t); getchar();
	for (i = 1; i <= t; i++) {
		scanf("%d", &n); getchar();
		int result = F(n);
		printf("Case #%d: %d\n", i, result);
	}
	return 0;
}
