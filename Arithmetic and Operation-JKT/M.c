#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    float result;
    scanf("%f %f", &x, &y);
    result = x/y * 100;
    printf("%.2f%%\n", result);

}
