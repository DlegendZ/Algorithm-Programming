#include <stdio.h>
#include <string.h>


int main() {
    int t, i, length;
    char num[14] = {};
    scanf("%d", &t); getchar(); //scanf the testcase
    for (i = 1; i <= t; i++) {
        scanf("%s", &num); getchar();
        length = strlen(num);
        printf("Case #%d: %d\n", i, length);
    }
    return 0;
}