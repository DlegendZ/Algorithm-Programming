#include <stdio.h>
#include <math.h>

int main() {
    int t, i, a, b, c, turn = 0, result;
    scanf("%d", &t);
    for (i = t; i > 0; i--) {
        turn += 1;
        scanf("%d %d %d", &a, &b, &c);
        result = a * b/100;
        if (result > c) {
            printf("Case #%d: %d\n", turn, c);
        }
        else {
            printf("Case #%d: %d\n", turn, result);
        }
    }
    return 0;
}