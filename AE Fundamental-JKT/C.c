#include <stdio.h>

int main() {
	int num, add, i;
	scanf("%d %d", &num, &add);
	add += 1;
	for (i = add; i > 0; i--) {
		printf("%d\n", num);
		num++;
	}
	return 0;
}
