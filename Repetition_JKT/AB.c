#include <stdio.h>

int main() {
    int i, j, t, n, a, b, c, d;
    scanf("%d", &t);
    for (j = 1; j <= t; j++) {
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
        // loop to scan everything
        int count = 0;
        //loop to check
        for (i = 1; i <= n; i++) {
            if (i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0) {
                count++;
            }
        }
        printf("Case #%d: %d\n", j, count);
    }

    return 0;
}