#include <stdio.h>

int main() {
    int i, t, j, a;
    scanf("%d", &t); getchar(); //scanf the testcase
    for (i = 1; i <= t; i++) {
        int num[6] = {};
        for (j = 0; j < 6; j++) {
            //loop it for 6 times to scanf the a,b,c,d,e,f
            scanf("%d", &num[j]); getchar();
        }
        printf("Case #%d: ", i);
        for (a = 0; a < num[0]; a++) {
            printf("a");
        }
        for (a = 0; a < num[1]; a++) {
            printf("s");
        }
        for (a = 0; a < num[2]; a++) {
            printf("h");
        }
        for (a = 0; a < num[3]; a++) {
            printf("i");
        }
        for (a = 0; a < num[4]; a++) {
            printf("a");
        }
        for (a = 0; a < num[5]; a++) {
            if (a == (num[5]-1)) {
                printf("p\n");
            }
            else {
                printf("p");
            }
        }
    }
    return 0;
}