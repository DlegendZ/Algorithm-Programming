#include <stdio.h>

int main() {
   int try, needed, add1, add2, result, i, turn = 0;
   scanf("%d", &try);
   for (i = try; i > 0; i--) {
    turn += 1;
    scanf("%d %d %d", &needed, &add1, &add2);
    if (needed > add1 + add2) {
        printf("Case #%d: no\n", turn);
    }
    else {
        printf("Case #%d: yes\n", turn);
    }
   }
}