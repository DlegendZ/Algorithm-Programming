#include <stdio.h>

int main() {
    int n, i, j, l, b, counting = 0;
    scanf("%d", &n); getchar(); //scanf the n

    for (j = 0; j <= n; j++) {
        for (l = 0; l <= n; l++) {
            b = (n - j - l);
            if (b >= 0) {
                if ((j+l+b) == n) {
                    counting++;
                }
            }
        }
    }

    printf("%d\n", counting);
    return 0;
}