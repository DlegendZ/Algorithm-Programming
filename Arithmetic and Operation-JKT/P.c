#include <stdio.h>
#include <math.h>

int main() {
    double x, y, result;
    int i;
    for (i = 4; i > 0; i--) {
        scanf("%lf %lf", &x, &y);
        result = y * 100/(100-x);
        printf("$%.2lf\n", result);
    }

    return 0;
}

// 25% of the real price is 25
// 25% * x= 25
// result = y * 100/100-x
