#include <stdio.h>
#include <math.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if (a*b == c-d) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
    return 0;
}