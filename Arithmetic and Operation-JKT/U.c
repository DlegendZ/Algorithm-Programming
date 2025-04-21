#include <stdio.h>
#include <math.h>

int main() {
    long long int n, a[3], b[3], i;
    double result[3];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lld %lld", &a[i], &b[i]);
        result[i] = (a[i] * b[i])/360.00;
    }
    for (i = 0; i < n; i++) {
        printf("%.2lf\n", result[i]);
    }
    return 0;
}
