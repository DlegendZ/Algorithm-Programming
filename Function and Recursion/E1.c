#include <stdio.h>

int calc(int tree[], int index, int num, int sum) {
	sum += tree[num];
	num += 1;
	if (num < index) return calc(tree, index, num, sum);
	return sum;
}

int main() {
	int i, t, j, n;
	scanf("%d", &t); getchar();
	for (i = 1; i <= t; i++) {
		scanf("%d", &n); getchar();
		int tree[n];
		for (j = 0; j < n; j++) {
			scanf("%d", &tree[j]); getchar();
		}
		int result = calc(tree, n, 0, 0);
		printf("Case #%d: %d\n", i, result);
	}
	return 0;
}
