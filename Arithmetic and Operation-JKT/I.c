#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, first_res, second_res;
    scanf("%d", &a);
    first_res = a + a;
    second_res = first_res - 1;
    printf("%d plus %d is %d\n", a, a, first_res);
    printf("minus one is %d\n", second_res);
}