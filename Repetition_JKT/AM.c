#include <stdio.h>

int main() {
    int t, i, j, n;
    scanf("%d", &t); getchar(); //scanf testcase
    for (i = 1; i <= t; i++) {
        int multiple_3 = 3, multiple_5 = 5, multiple_15 = 15;
        //loop based on the testcase to find the n
        scanf("%d", &n); getchar(); // scanf the n
        printf("Case #%d:\n", i);
        for (j = 1; j <= n; j++) {
            //loop based on the n
            if (j == multiple_3|| j == multiple_5) {
                multiple_3 = (j == multiple_3) ? multiple_3 + 3 : multiple_3;
                multiple_5 = (j == multiple_5) ? multiple_5 + 5 : multiple_5;
                if (j != multiple_15) {
                    printf("%d Jojo\n", j);
                }
                else if (j ==  multiple_15) {
                    printf("%d Lili\n", j);
                    multiple_15 = (j == multiple_15) ? multiple_15 + 15 : multiple_15;
                }
            }
            else {
                printf("%d Lili\n", j);
            }
        }
    }
    return 0;
}