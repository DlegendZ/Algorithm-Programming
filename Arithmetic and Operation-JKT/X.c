#include <stdio.h>
#include <math.h>

int main() {
    long long int x, y, z, result;
    scanf("%lld %lld %lld", &x, &y, &z);
    result = x * y * z;
    printf("%lld\n", result);
    return 0;
}