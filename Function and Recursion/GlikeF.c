#include <stdio.h>
#include <string.h>

void reverseAndCheck(char text[], int length, int num, char reversedText[]) {
	if (length > 0) {
		reversedText[num] = text[length-1];
		length -= 1;
		num += 1;
		return reverseAndCheck(text, length, num, reversedText);
	}
	
	if (strcmp(text,reversedText) == 0) {
		printf("yes");
		return;
	} else {
		printf("no");
		return;
	}
} 

int main() {
	int i, n;
	char text[1001];
	scanf("%d", &n); getchar();
	for (i = 1; i <= n; i++) {
		scanf("%s", text); getchar();
		char reversedText[1001] = {};
		printf("Case #%d: ", i);
		reverseAndCheck(text, strlen(text), 0, reversedText);
		printf("\n");
	}
	return 0;
}
