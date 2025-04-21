#include <stdio.h>

int main() {
	int N, M, i;
	scanf("%d %d", &N, &M);
	for (i = N; i <= M; i++) {
		N = i;
		printf("%d\n", N);
	}
	return 0;
	
}
