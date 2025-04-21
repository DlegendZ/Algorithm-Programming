#include <stdio.h>

int main() {
    int t, i, n, j;
    scanf("%d", &t); getchar(); //scanf the testcase

    for (i = 1; i <= t; i++) {
        scanf("%d", &n); getchar(); //scanf the integer n
        int word = 97;
        printf("Case #%d: ", i);
        for (j = 0; j < n; j++) {
            if (j == (n-1)) {
                printf("%c\n", word);
            }
            else {
                printf("%c", word);
            }
            word++;
        }
    }
    return 0;
}