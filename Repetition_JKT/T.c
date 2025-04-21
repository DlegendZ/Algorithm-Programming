#include <stdio.h>

int main() {
    int i, n, tci, tsi, tvi, total = 0;
    scanf("%d", &n); //scanf the n times
    for (i = 0; i < n; i++) {
        //loop for n times
        scanf("%d %d %d", &tci, &tsi, &tvi);
        if (tsi > tvi) {
            total += 1;
        }
    }
    printf("%d\n", total);
    return 0;
}