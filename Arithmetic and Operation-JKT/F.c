#include <stdio.h>
#include <math.h>

int main() {
    int a, b, result, i;
    for (i = 3; i > 0; i--) {
        scanf("%d + %d =", &a, &b);
        result = a + b;
        printf("%d\n", result);
    }
   
    return 0;
}