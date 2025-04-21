#include <stdio.h>

int A(int m, int n) {
	if (m == 0) return n + 1;
	if (m > 0 && n == 0) return A(m-1,1);
	if (m > 0 && n > 0) return A(m-1,A(m,n-1));
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n); getchar();
	int result = A(m,n);
	printf("result: %d\n", result);
	return 0;
}
