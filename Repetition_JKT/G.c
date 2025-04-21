#include <stdio.h>

int main() {
    int total = 0, n, i, animals;
    scanf("%d", &n); getchar();
    for (i = 0; i < n; i++) {
        scanf("%d", &animals);
        total += animals;
    }
    printf("%d\n", total);
    return 0;
}