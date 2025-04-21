#include <stdio.h>

int tiles = 0;

find_tiles(char text[101][101], int row, int col, int max_row, int max_col) {
	if (row<0 || row >max_row || col<0 || col>max_col || text[row][col] == '#') {
		return;
	}
	
	if (text[row][col] == '.') {
		tiles++;
	}
	
	text[row][col] = '#';
	
	find_tiles(text, row+1, col, max_row, max_col);
	find_tiles(text, row-1, col, max_row, max_col);
	find_tiles(text, row, col+1, max_row, max_col);
	find_tiles(text, row, col-1, max_row, max_col);
}

void loc_s(char text[101][101], int row, int col, int max_row, int max_col) {
	for (row=0; row<=max_row; row++) {
		for (col=0; col<=max_col; col++) {
			if (text[row][col] == 'S') {
				find_tiles(text, row, col, max_row, max_col);
				return;
			}
		}
	}
}

int main() {
	int t, i, j, k, row, col;
	char text[101][101];
	scanf("%d", &t); getchar();
	
	for (i=1; i<=t; i++) {
		tiles = 0;
		
		scanf("%d %d", &row, &col); getchar();
		
		for (j=0; j<row; j++) {
			for (k=0; k<col; k++) {
				scanf("%c", &text[j][k]);
			}
			getchar();
		}
		
		loc_s(text, 0, 0, row-1, col-1);
		
		printf("Case #%d: %d\n", i, tiles);
	}
	return 0;
}
