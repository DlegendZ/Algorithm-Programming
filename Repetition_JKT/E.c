#include <stdio.h>

int main() {
    int t, x, p, i, result;
    scanf("%d", &t);
    for (i = t; i > 0; i--) {
        scanf("%d %d", &x, &p);
        result = (x >> p) & 1;
        printf("%d\n", result);
    }
    return 0;
}