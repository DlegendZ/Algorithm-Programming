#include <stdio.h>

int main() {
    int t, i, n, cuts, addition, j, peace;
    scanf("%d", &t); getchar(); //scanf testcase
    for (i = 1; i <= t; i++) {
        //loop t times
        scanf("%d", &n); getchar(); //scanf the n
        printf("Case %d:", i);
        cuts = n - 1, addition = 0, peace = 1;
        for (j = 0; j <= cuts; j++) {
            peace += addition;
            addition++;
            printf(" %d", peace);
            if (j == cuts) {
                printf("\n");
            }
        }
        
    }
    return 0;
}