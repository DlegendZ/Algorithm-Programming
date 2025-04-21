#include <stdio.h>

void liliOrJojo(long long int n, int turn) {
	if (n > 1) {
		if (n%2 == 0) {
			n = n/2;
		} else {
			n = n*3+1;
		}
		turn += 1;
		liliOrJojo(n, turn);
		return;
	}
	
	if (n == 1) {
		if (turn%2 == 0) {
			printf("Lili");
		} else {
			printf("Jojo");
		}
	}
	return;
}

int main() {
	int t, i;
	long long int n;
	scanf("%d", &t); getchar();
	for (i = 1; i <= t; i++) {
		scanf("%lld", &n); getchar();
		printf("Case #%d: ", i);
		liliOrJojo(n, 0);
		printf("\n");
	}
	return 0;
}
