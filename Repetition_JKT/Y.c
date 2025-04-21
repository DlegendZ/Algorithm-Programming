#include <stdio.h>

int main() {
    int t, i, j, k, m, n;
    scanf("%d", &t); getchar(); //scanf the testcase
    for (i = 1; i <= t; i++) {
        scanf("%d %d", &n, &m); getchar(); //scanf the n and m
        printf("Case #%d:\n", i);
        for (j = 1; j <= n; j++) {
            for (k = 1; k <= m; k++) {
                if (j == 1 || j == n || k == 1 || k == m) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}