#include <stdio.h>

int main() {
    int t, i, j, n, m, price;
    scanf("%d", &t); getchar(); //scanf the t times
    for (i = 1; i <= t; i++) {
        //loop t times
        scanf("%d %d", &n, &m); getchar();
        int bill = 0;
        for (j = 1; j <= n; j++) {
            //loop n times
            scanf("%d", &price); getchar();
            //count for bill
            bill += price;
        }
        if (bill > m) {
            //if money is not enough
            printf("Case #%d: Wash dishes\n", i);
        }
        else if (bill <= m) {
            //if money is enough
            printf("Case #%d: No worries\n", i);
        }
    }
    return 0;
}