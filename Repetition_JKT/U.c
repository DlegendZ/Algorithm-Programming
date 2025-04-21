#include <stdio.h>

int main() {
    int i, t, j, n, lili, bibi;
    char text[101];
    scanf("%d", &t); getchar();//scanf the testcase
    for (i = 1; i <= t; i++) {
        //loop t times
        lili = 0; bibi = 0;
        scanf("%d", &n); getchar();//scanf n times
        scanf("%s", &text); getchar(); //scanf the win or lose
        for (j = 0; j < n; j++) {
            if (text[j] == 'L') {
                lili += 1;
            }
            else if (text[j] == 'B') {
                bibi += 1;
            }
        }
        if (lili > bibi) {
            printf("Lili\n");
        }
        else if (bibi > lili) {
            printf("Bibi\n");
        }
        else if (bibi == lili) {
            printf("None\n");
        }
    }
    return 0;
}