#include <stdio.h>
#include <string.h>

void swap_char(char *char1, char *char2) {
    char temp = *char1;
    *char1 = *char2;
    *char2 = temp;
} 

void swap_text(char text1[201], char text2[201]) {
    char temp[201];
    strcpy(temp, text1);
    strcpy(text1, text2);
    strcpy(text2, temp);
}
void qsort_ascending(int l, int r, char text[201]) {
    int j, k;
    if (l < r) {
        j = l;
        k = r + 1;
        do {
            do {j++;} while (j<=r && (text[j] < text[l]));
            do {k--;} while (k>=l && (text[k] > text[l]));
            if (j < k) {
                swap_char(&text[j], &text[k]);
            }
        } while (j < k);
        swap_char(&text[l], &text[k]);
        qsort_ascending(l, k-1, text);
        qsort_ascending(k+1, r, text);
    }
}

void qsort_descending(int l, int r, char text[][201]) {
    int j, k;
    if (l < r) {
        j = l;
        k = r + 1;
        do {
            do {j++;} while (j<=r && (strcmp(text[j],text[l]) > 0));
            do {k--;} while (k>=l && (strcmp(text[k],text[l]) < 0));
            if (j < k) {
                swap_text(text[j], text[k]);
            }
        } while (j < k);
        swap_text(text[l], text[k]);
        qsort_descending(l, k-1, text);
        qsort_descending(k+1, r, text);
    }
}

int main() {
    int row;
    int col;

    scanf("%d %d", &row, &col); getchar();

    char text[201][201];

    for (int i=0; i<row; i++) {
        scanf("%s", text[i]); getchar();
    }

    for (int i=0; i<row; i++) {
        qsort_ascending(0, col-1, text[i]);
    }

    qsort_descending(0, row-1, text);

    for (int i=0; i<row; i++) {
        printf("%s\n", text[i]);
    }
    return 0;
}