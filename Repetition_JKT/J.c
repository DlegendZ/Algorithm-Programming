#include <stdio.h>
#include <math.h>

int main() {
    long long int t, n, i, j, toys;
    scanf("%lld", &t);
    for(i = 1; i <= t; i++) {
        scanf("%lld", &n);
        double result = 0.00;
        for (j = 1; j <= n; j++) {
            scanf("%lld", &toys);
            result += toys;
        }
        printf("Case #%lld: %.0lf\n", i, result);
    }
    return 0;
}