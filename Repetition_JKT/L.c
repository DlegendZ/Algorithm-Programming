#include <stdio.h>

int main() {
    int t, i, a, b, j;
    scanf("%d", &t); getchar();
    for (i = 1; i <= t; i++) {
        //loop for t times
        scanf("%d %d", &a, &b); getchar();
        int max = a;
        for (j = a; j >= b; j++) {
            j -= b; //take 2 empty bottles to be a new empty bottle.
            max += 1; //add maximum
        }
        printf("Case #%d: %d\n", i, max);
    }
    return 0;
}