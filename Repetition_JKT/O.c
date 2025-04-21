#include <stdio.h>

int main() {
    int t, i, j, plate, capacity, initial;
    scanf("%d", &t); getchar(); // scanf testcases
    for (i = 1; i <= t; i++) {
        scanf("%d %d %d", &plate, &capacity, &initial); getchar();
        int portion, max_portion = initial;
        for (j = 1; j <= plate; j++) {
            scanf("%d", &portion); getchar();
            if (max_portion < portion && portion <= capacity) {
                max_portion = portion;
            }
        }
        printf("Case #%d: %d\n", i, max_portion);
    }
    return 0;
}