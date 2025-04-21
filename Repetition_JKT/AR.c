#include <stdio.h>

int main() {
    int m, n, i, j, k;
    scanf("%d %d", &m, &n); getchar(); // scanf the m and n
    for (i = 0; i < m; i++) {
        for (j = 1; j <= n; j++) {
            for (k = 0; k < (n-j); k++) {
                printf(" ");
            }
            for (k = 0; k < j; k++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

