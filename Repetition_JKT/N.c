#include <stdio.h>

int main() {
    int i, t, a, b, j;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        int max = a;
        for (j = a; j >= b; j++) {
            j -= b;
            max += 1;
        }
        printf("Case #%d: %d\n", i, max);
    }
    return 0;
}