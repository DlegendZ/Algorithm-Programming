#include <stdio.h>
#include <math.h>

int main() {
    long long int a, b, c, d, result_1, result_2, result_3;
    scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d); getchar();
    result_1 = (a+b)*(c-d);
    scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d); getchar();
    result_2 = (a+b)*(c-d);
    scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d); getchar();
    result_3 = (a+b)*(c-d);
    printf("%lld %lld %lld\n", result_1, result_2, result_3);
    return 0;
}