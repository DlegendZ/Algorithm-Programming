#include <stdio.h>

int main() {
    long long int hit;
    long long int result = 0;
    long long int crit = 0;
    scanf("%d", &hit);
    for (int i = 0; i < hit; i++) {
        result += 100 + crit;
        crit += 50;
    }
    printf("%lld\n", result);
    return 0;
}