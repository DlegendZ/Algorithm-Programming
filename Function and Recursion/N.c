#include <stdio.h>

int found = 0;

char chess[9][9];

void empty_chess() {
	int i, j;
	for (i=0; i<=7; i++) {
		for (j=0; j<=7; j++) {
			chess[i][j] = ' ';
		}
	}
	return;
}

void black_knight(int x1, int y1, int step) {
	if (x1<0 || x1>7 || y1<0 || y1>7 || chess[x1][y1] == '.') {
		return;
	}
	
	chess[x1][y1] = '.';

	
	if (step>0) {
		step--;
		black_knight(x1 - 1, y1 + 2, step);
        black_knight(x1 + 1, y1 + 2, step);
        black_knight(x1 + 2, y1 + 1, step);
        black_knight(x1 + 2, y1 - 1, step);
        black_knight(x1 + 1, y1 - 2, step);
        black_knight(x1 - 1, y1 - 2, step);
        black_knight(x1 - 2, y1 - 1, step);
        black_knight(x1 - 2, y1 + 1, step);
	}
}

void white_knight(int x2, int y2, int step) {
	if (x2<0 || x2>7 || y2<0 || y2>7 || chess[x2][y2] == '#') {
		return;
	}
	
	if (chess[x2][y2] == '.') {
		found = 1;
		return;
	} 
	
	chess[x2][y2] = '#';
	
	if (step>0) {
		step--;
		white_knight(x2 - 1, y2 + 2, step);
        white_knight(x2 + 1, y2 + 2, step);
        white_knight(x2 + 2, y2 + 1, step);
        white_knight(x2 + 2, y2 - 1, step);
        white_knight(x2 + 1, y2 - 2, step);
        white_knight(x2 - 1, y2 - 2, step);
        white_knight(x2 - 2, y2 - 1, step);
        white_knight(x2 - 2, y2 + 1, step);
	}
}

int main() {
	int t, i, step, y1r, y2r;
	char x1c, x2c;
	scanf("%d", &t); getchar();
	
	
	for(i=1; i<=t; i++) {
		found = 0;
		
		empty_chess();
		
		scanf("%d", &step); getchar();
		scanf("%c%d %c%d", &x1c, &y1r, &x2c, &y2r); getchar();
		
		int x1 = x1c - 'A';
		int x2 = x2c - 'A';
		int y1 = 8 - y1r;
		int y2 = 8 - y2r;

		
		black_knight(x1,y1,step);
		white_knight(x2,y2,step);
		
		if (found) {
			printf("Case #%d: YES\n", i);
		} else {
			printf("Case #%d: NO\n", i);
		}
	}
	return 0;
}



