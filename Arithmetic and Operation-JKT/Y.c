#include <stdio.h>
#include <math.h>

int main() {
    long long int n, i, p[3], num[3];
    double result[3];
    scanf("%lld", &n);
    for (i = 0; i < n; i++) {
        scanf("%lld %lld", &p[i], &num[i]);
        result[i] = num[i] * p[i]/100.00;
    }

    for (i = 0; i < n; i++) {
        printf("%.2lf\n", result[i]);
    }
    return 0;
}