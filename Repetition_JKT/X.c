#include <stdio.h>

int main() {
    int n = 1, i, q;
    scanf("%d", &q); getchar(); //scanf the number of process
    for (i = 1; i <= q; i++) {
        n  *= 2;
        n += 1;
    }
    printf("%d\n", n);
    return 0;
}