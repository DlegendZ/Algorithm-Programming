#include <stdio.h>

char box[101][101];

void empty_box() {
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            box[i][j] = ' ';
        }
    }
}

int count_perimeter(int max_row, int max_col) {
    int perimeter = 0;

    for (int i = 0; i < max_row; i++) {
        for (int j = 0; j < max_col; j++) {
            if (box[i][j] == '.') {
                if (i == 0 || box[i - 1][j] == ' ') perimeter += 2; 
                if (j == 0 || box[i][j - 1] == ' ') perimeter += 2; 
                if (j == max_col-1 || box[i][j + 1] == ' ') perimeter += 2; 
                if (i == max_row-1 || box[i + 1][j] == ' ') perimeter += 2; 
            }
        }
    }

    return perimeter;
}

int main() {
    int t;

    FILE *f = fopen("testdata.in", "r");

    fscanf(f, "%d\n", &t);

    for (int i = 0; i < t; i++) {
        empty_box();

        int stack;
        int max_box_stack = 0;
        int total_box = 0;

        fscanf(f, "%d\n", &stack);

        for (int j = 0; j < stack; j++) {
            int box_stack;
            fscanf(f, "%d", &box_stack);
            total_box += box_stack;

            if (box_stack > max_box_stack) {
                max_box_stack = box_stack;
            }

            for (int k = 0; k < box_stack; k++) {
                box[k][j] = '.'; 
            }
        }

        int area = total_box * 4;

        int perimeter = count_perimeter(max_box_stack, stack);

        printf("Case #%d: %d %d\n", i + 1, perimeter, area);
    }

    fclose(f);
    return 0;
}

