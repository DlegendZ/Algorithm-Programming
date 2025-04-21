#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(int shift, char text[1001], int text_length) {
	for (int i=0; i<text_length; i++) {
		switch (text[i]) {
			case '0' :
				text[i] = 'O';
				break;
			case '1' :
				text[i] = 'I';
				break;
			case '3' :
				text[i] = 'E';
				break;
			case '4' :
				text[i] = 'A';
				break;
			case '5' :
				text[i] = 'S';
				break;
			case '6' :
				text[i] = 'G';
				break;
			case '7' :
				text[i] = 'T';
				break;
			case '8' :
				text[i] = 'B';
				break;
			default :
				break;
		}
	}
	
	for (int j=0; j<text_length; j++) {
		if (isalpha(text[j])) {
			text[j] = text[j] - shift;
			if (text[j] < 'A') {
				text[j] = text[j] + 26;
			}
			else if (text[j] > 'Z') {
				text[j] = text[j] - 26;
			}
		}
		printf("%c", text[j]);
	}
}

int main() {
	int t;
	
	FILE *f = fopen("testdata.in", "r");
	fscanf(f, "%d\n", &t);
	
	for (int i=0; i<t; i++) {
		int shift;
		char text[1001];
		
		fscanf(f, "%d\n", &shift);
		fscanf(f, "%[^\n]\n", text);
		
		int text_length = strlen(text);
		
		printf("Case #%d: ", i+1);
		
		reverse(shift, text, text_length);
		
		printf("\n");
	}
	return 0;
}
