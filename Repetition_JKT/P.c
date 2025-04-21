#include <stdio.h>
#include <math.h>

int main() {
    int t, i, k, j;
    scanf("%d", &t); getchar(); //scanf to get testcases
    for (i = 1; i <= t; i++) {
        scanf("%d", &k);
        int position = 0, jump = 0;
        for (j = 1; position < k; j++) {
            position += j;
            jump += 1;
        }
        printf("Case #%d: %d\n", i, jump);
    }
    return 0;
}