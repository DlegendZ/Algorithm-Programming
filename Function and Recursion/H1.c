#include <stdio.h>

void s(int n, char alpha1, char alpha2) {
	if (n == 0) {
		printf("%c", alpha1);
		return;
	}
	if (n == 1) {
		printf("%c", alpha2);
		return;
	}
	
	s(n-1, alpha1, alpha2);
	s(n-2, alpha1, alpha2);
	return;
}

int main() {
	int i, t, n;
	char alpha1, alpha2;
	scanf("%d", &t); getchar();
	for (i = 1; i <= t; i++) {
		scanf("%d %c %c", &n, &alpha1, &alpha2); getchar();
		printf("Case #%d: ", i);
		s(n, alpha1, alpha2);
		printf("\n");
	}
	return 0;
}
