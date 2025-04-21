#include <stdio.h>

void calculate(int arr[], int n, int index, int sum) {
	if (index > n) {
		return;
	}
	
	sum += arr[index-1];
	
	if (2*index > n && 2*index+1 > n) {
		printf("%d\n", sum);
		return;
	}
	
	calculate(arr, n, 2*index, sum);
	calculate(arr, n, 2*index+1, sum);
}

int main() {
	int t, i, j, n;
	
	scanf("%d", &t); getchar();
	
	for (i = 1; i <= t; i++) {
		scanf("%d", &n); getchar();
		int arr[n];
		
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[j]); getchar();
		}
		printf("Case #%d:\n", i);
		calculate(arr, n, 1, 0);
	}
	return 0;
}
