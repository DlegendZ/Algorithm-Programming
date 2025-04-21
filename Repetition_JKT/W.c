#include <stdio.h>

int main() {
    int i, t, n, num, j, odd, even;
    scanf("%d", &t); getchar(); //scanf the testcase
    for (i = 1; i <= t; i++) {
        //loop t times to scanf the n
        odd = 0, even = 0;
        scanf("%d", &n); getchar(); //scanf the n
        for (j = 1; j <= n; j++) {
            scanf("%d", &num); getchar(); //scanf the num
            if (num % 2 == 0) {
                even += 1;
            }
            else if (num % 2 != 0) {
                odd += 1;
            }
        }
        printf("Odd group : %d integer(s).\n", odd);
        printf("Even group : %d integer(s).\n\n", even);
    }
    return 0;
}