#include <stdio.h>
#include <math.h>

int main() {
    double b, h, l, result;
    scanf("%lf %lf %lf", &l, &b, &h);
    result = 3*(b*l) + (b*h);
    printf("%.3lf\n", result);
    return 0;
}

