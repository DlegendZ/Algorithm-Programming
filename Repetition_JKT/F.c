#include <stdio.h>

int main() {
    int i, j, n, k, a;
    scanf("%d %d", &n, &k);

    //first square
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    
    //second square
    for (i = 1, a = k; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == a) {
                printf("#");
            }
            else {
                printf(".");
            }
        }
        if (i == a) {
            a += k;
        }
        printf("\n");
    }
    printf("\n");
    
    //third square
    for (i = 1; i <= n; i++) {
        a = k;
        for (j = 1; j <= n; j++) {
            if (j == a) {
                printf("#");
                a += k;
            }
            else {
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}