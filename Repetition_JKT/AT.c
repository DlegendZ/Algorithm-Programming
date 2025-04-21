#include <stdio.h>

int main() {
    int t, i, j, n, k;
    
    scanf("%d", &t); getchar(); // scanf the testcase

    for (i = 0; i < t; i++) {
        scanf("%d", &n); getchar(); // scanf the n
        int prime_num = 1;
        for (j = 1; j <= n; j++) {
            for (k = 0; k < (n-j); k++) {
                printf(" ");
            }
            for (k = 0; k < prime_num; k++) {
                printf("*");
            }
            prime_num += 2;
            printf("\n");
        }
    }
    return 0;
}