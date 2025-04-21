#include <stdio.h>

int main() {
    int i, j, t, n, m;
    scanf("%d", &t);
    for (j = 1; j <= t; j++) {
        scanf("%d %d", &n, &m);
        // loop for scanning testcase
        int price, candy = 0, max_candy = 0;
        //loop for price to input
        for (i = 1; i <= n; i++) {
            scanf("%d", &price);
            candy = m/price;
            if (max_candy < candy) {
                max_candy = candy;
            }
        }
        printf("Case #%d: %d\n", j, max_candy);
    }
    return 0;
}