#include <stdio.h>
#include <math.h>

int main() {
    double a, b, result;
    scanf("%lf %lf", &a, &b);
    result = (b/a) * 100;
    printf("%.4lf%%\n", result); 
    return 0;
}