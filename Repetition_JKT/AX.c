#include <stdio.h>

int main() {
    long long int i, n, num, total = 0;
    scanf("%lld", &n); getchar();
    for (i = 0; i < n; i++) {
        scanf("%lld", &num); getchar();

        if (num > 0) {
            //positive means profit
            total += num;
        }
    }
    printf("%lld\n", total);
    return 0;
}