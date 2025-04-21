#include <stdio.h>

int calc(int f_zero, int f_one, int k) {
	if (k == 0) return f_zero;
	if (k == 1) return f_one;
	return calc(f_zero, f_one, k-1) + calc(f_zero, f_one, k-2);
}

int main() {
	int f_zero, f_one, k, result;
	scanf("%d %d", &f_zero, &f_one); getchar();
	scanf("%d", &k); getchar();
	result = calc(f_zero, f_one, k);
	printf("%d\n", result);
	return 0;
}
