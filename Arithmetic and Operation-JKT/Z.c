#include <stdio.h>
#include <math.h>

int main() {
    int n, i, a[3], b[3], c[3], d[3];
    float result[3];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
        result[i] = 2*(a[i]/1.0) + 4*(b[i]/2.0) + 4*(c[i]/3.0) + 2*(d[i]/4.0);
    }

    for (i = 0; i < n; i++) {
        printf("%.2f\n", result[i]);
    }
    return 0;
}