#include <stdio.h>

int main() {
    long long int n, p, r, max = 0, i;
    scanf("%lld %lld", &n, &p); getchar(); //scanf the balloons and strength
    for (i = 1; i <= n; i++) {
        //loop n times
        scanf("%lld", &r); getchar(); //scanf the resistanc
        if (p > r) {
            max ++;
        }
    }
    printf("%lld\n", max);
    return 0;
}