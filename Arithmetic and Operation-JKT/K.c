#include <stdio.h>
#include <math.h>

int main() {
    int x, n = 3;
    double y, result;
    scanf("%d %lf", &x, &y);
    result = x * pow(1 + y/100 , 3);
    printf("%.2lf\n", result);
    return 0;
}
