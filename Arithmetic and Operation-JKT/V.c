#include <stdio.h>
#include <math.h>

int main() {
    int num[3], i, result[3];
    for (i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
        result[i] = (num[i] % 100) / 10;
    }
    for (i = 0; i < 3; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}
