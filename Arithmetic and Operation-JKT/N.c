#include <stdio.h>
#include <math.h>

int main() {
    float a, b, result;
    scanf("%f %f", &a, &b);
    result = 100 - (b/a * 100);
    printf("%.2f%%\n", result);
    return 0;
}
