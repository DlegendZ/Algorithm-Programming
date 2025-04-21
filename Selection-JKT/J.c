#include <stdio.h>
#include <math.h>

int main() {
    int x, y, k, t;
    scanf("%d %d %d", &x, &y, &k);
    if ((k-x) == (y-k) && (k-x) >= 0) {
        t = k-x;
        printf("%d\n", t);
    }
    else {
        t = -1;
        printf("%d\n", t);
    }
    return 0;
}