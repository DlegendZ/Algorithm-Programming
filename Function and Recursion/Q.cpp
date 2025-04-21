#include <stdio.h>

int minimum;

char chess[9][9];

void empty_chess() {
	for (int i=0; i<=7; i++) {
		for (int j=0; j<=7; j++) {
			chess[i][j] = ' ';
		}
	}
}

void nearest(int x, int y, int step) {
	if (x<0 || x>7 || y<0 || y>7 || chess[x][y] == '.') {
		return;
	}
	
	if (chess[x][y] == '#') {
		if (step < minimum) {
			minimum = step;
		}
		return;
	}
	
	if (step >= minimum) {
		return;
	}
	
	chess[x][y] = '.';
	
	nearest(x - 1, y + 2, step + 1);
	nearest(x + 1, y + 2, step + 1);
	nearest(x + 2, y + 1, step + 1);
	nearest(x + 2, y - 1, step + 1);
	nearest(x + 1, y - 2, step + 1);
	nearest(x - 1, y - 2, step + 1);
	nearest(x - 2, y - 1, step + 1);
	nearest(x - 2, y + 1, step + 1);
	
	chess[x][y] = ' ';	
}

int main() {
	int t;
	
	scanf("%d", &t); getchar();
	
	for (int i=1; i<=t; i++) {
		minimum = 1e9;
		
		empty_chess();
		
		int y1r, y2r;
		char x1c, x2c;
		scanf("%c%d %c%d", &x1c, &y1r, &x2c, &y2r); getchar();
		
		int x1 = x1c - 'A';
		int y1 = 8 - y1r;
		int x2 = x2c - 'A';
		int y2 = 8 - y2r;
		
//		printf("%d%d %d%d", x1, y1, x2, y2);
		
		chess[x2][y2] = '#';
		nearest(x1, y1, 0);
		
		printf("Case #%d: %d\n", i, minimum);
	}
	return 0;
}
