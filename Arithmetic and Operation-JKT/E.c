#include <stdio.h>
#include <math.h>

int main() {
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = a + b;
    printf("%d\n", result);
    result = a - b;
    printf("%d\n", result);
    result = a * b;
    printf("%d\n", result);
    result = a/b;
    printf("%d\n", result);
    result = a % b;
    printf("%d\n", result);
    return 0;
}