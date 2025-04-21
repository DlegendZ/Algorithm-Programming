#include <stdio.h>

#define phi 3.14

int main() {
    int r, h, t, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d %d", &r, &h);
        float result = 2*phi*r*(r + h);
        printf("Case #%d: %.2f\n", i, result);
    }
    return 0;
}