#include <stdio.h>

int main() {
    int i, t, j, n, k, h;
    scanf("%d", &t); getchar(); //scanf testcase
    for (i  = 1; i <= t; i++) {
        int total = 0;
        scanf("%d", &n); getchar(); //scanf the n
        int num[n+1];
        for (j = 1; j <= n; j++) {
            scanf("%d", &num[j]); getchar(); //scanf the num
            total += num[j];
        }
        int LHS = 0;
        for (h = 1; h <= (n-1); h++) {
            //loop from index 1 to 3
            LHS += num[h];
            if (LHS == (total - LHS)) {
                printf("Case #%d: Yes\n", i);
                break;
            }
            else if (h == (n-1) && LHS != (total - LHS)) {
                printf("Case #%d: No\n", i);
                break;
            }
        }
    }
    return 0;
}
