#include <stdio.h>

int main() {
    int testcase, turn, i, n, m;
    scanf("%d", &testcase);
    for (i = testcase; i > 0; i--) {
        turn += 1;
        scanf("%d %d", &n, &m);
        if ((n*m) % 2 == 0) {
            printf("Case #%d: Party time!\n", turn);
        }
        else {
            printf("Case #%d: Need more frogs\n", turn);
        }
    }
    return 0;
}