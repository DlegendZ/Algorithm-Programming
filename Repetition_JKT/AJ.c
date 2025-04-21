#include <stdio.h>

int main() {
    int i, n, num, total = 0;
    scanf("%d", &n); getchar(); //scanf the times
    for (i = 0; i < n; i++) {
        scanf("%d", &num); getchar();
        total += num;
    }
    printf("%d\n", total);
    return 0;
}