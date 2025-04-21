#include <stdio.h>
#include <math.h>

int main() {
    int x, y, result, i;
    for (i = 4; i > 0; i--) {
        scanf("%d %d", &x, &y);
        result = x * y;
        printf("%d\n", result);
    }
    return 0;
}
