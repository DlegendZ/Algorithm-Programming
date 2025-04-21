#include <stdio.h>

int main() {
    int t, i, n, j, k;
    scanf("%d", &t); getchar(); // to scanf testcase
    for (i = 1; i <= t; i++) {
        //loop t times
        scanf("%d", &n);
        for (j = 1; j <= n; j++) {
            for (k = 1; k <= n; k++) {
                if (j == 1 || k == 1 || j == n || k == n || k == j || (n-k+1) == j) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//2 and 6
// 3 and 5