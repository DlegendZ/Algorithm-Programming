#include <stdio.h>
#include <math.h>

int main() {
    char coursecode[5][100];
    int starthour[5], endhour[5], startmin[5], endmin[5], i;

    for (i = 0; i < 5; i++) {
        scanf("%s %d:%d-%d:%d", &coursecode[i], &starthour[i], &startmin[i], &endhour[i], &endmin[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("%s %02d:%02d-%02d:%02d\n", coursecode[i], --starthour[i], startmin[i], --endhour[i], endmin[i]);
    }
    return 0;
}