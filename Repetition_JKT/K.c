#include <stdio.h>

int main() {
    int t, n, i, j, h;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d", &n);
        printf("Case #%d:\n", i);
        for (j = 1; j<=n; j++) {
            for (h = 1; h<=(n-j); h++) {
                printf(" ");
            }
            for (h = (n-j)+1; h <= n; h++) {
                if ((h+j)%2==0) {
                    printf("*");
                }
                else {
                    printf("#");
                }
            }
            printf("\n");
        }
    }
    return 0;
}