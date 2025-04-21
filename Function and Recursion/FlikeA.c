#include <stdio.h>
#include <string.h>

void reverse(char text[], int length) {
	if (length > 0) {
		printf("%c", text[length-1]);
		length -= 1;
		reverse(text, length);
	}
	return;
}

int main() {
	int i, n;
	char text[1001];
	scanf("%d", &n); getchar();
	for (i = 1; i <= n; i++) {
		scanf("%[^\n]", text); getchar();
		printf("Case #%d: ", i);
		reverse(text, strlen(text));
		printf("\n");
	}
	return 0;
}
