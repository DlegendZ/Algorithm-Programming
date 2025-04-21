#include <stdio.h>

int main() {
    int testcase, a, b, turn = 0, i;
    scanf("%d", &testcase);
    for (i = testcase; i > 0; i--) {
        turn += 1;
        scanf("%d %d", &a, &b); getchar();
        if (a > b) {
            printf("Case #%d: Go-Jo\n", turn);
        }
        else if (a < b) {
            printf("Case #%d: Bi-Pay\n", turn);
        }
           
    }
    return 0;
}