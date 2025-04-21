#include <stdio.h>

int calc(int a, int b) {
	if (a == 1) return a;
	if (a%2 == 0) {
		if (a == b) {
			return a;
		}
		return calc(a/2, b);
	}
	if (a%2 != 0) {
		if (a == b) {
			return a;
		}
		return calc(a*3+1, b);
	}
}

int main() {
	int t, a, b, i;
	scanf("%d", &t); getchar();
	for (i = 1; i <= t; i++) {
		scanf("%d %d", &a, &b); getchar();
		int result = calc(a,b);
		printf("Case #%d: ", i);
		if (result == b) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
