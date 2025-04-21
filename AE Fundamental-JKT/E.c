#include <stdio.h>

int main () {
	int try, needed, add1, add2, i, turn = 0;
	scanf("%d", &try);
	for (i = try; i > 0; i--) {
		turn++;
		scanf("%d %d %d", &needed, &add1, &add2);
		if (needed > add1 + add2) {
			printf("Case #%d : no\n", turn);
		}
		else {
			printf("Case #%d : yes\n", turn);
		}
	}
	return 0;
}
