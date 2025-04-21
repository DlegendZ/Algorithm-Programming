#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, i;
    for (i = 3; i > 0; i--) {
        scanf("%f %f %f %f", &a, &b, &c, &d);
        float result = 2*(a/1) + 4*(b/2) + 6*(c/3) + 4*(d/4);
        printf("%.2f\n", result);
    }
    return 0;
}