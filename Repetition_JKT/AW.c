#include <stdio.h>

int main() {
    int t, n, i, j;
    scanf("%d", &t); getchar(); //scanf testcase

    for (i = 1; i <= t; i++) {
        scanf("%d", &n); getchar(); //scanf the integer n
        int same_max = 1, max_num = 0, num;
        for (j = 0; j < n; j++) {
            scanf("%d", &num); getchar();
            if (max_num < num) {
                max_num = num;
                same_max = 1;
            }
            else if (max_num == num) {
                same_max += 1;
            }
        }
        printf("Case #%d: %d\n", i, same_max);
    }

    return 0;
}