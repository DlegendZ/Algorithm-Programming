#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d, i, result;
    for (i = 3; i > 0; i--) {
        scanf("(%d+%d)x(%d-%d)", &a, &b, &c, &d);
        result = (a+b)*(c-d);
        printf("%d\n", result);
    }
    return 0;
}