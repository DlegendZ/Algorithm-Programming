#include <stdio.h>

int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    for (i = m; i > 0; i--) {
        printf("%d\n", n);
        n++;
    }
    return 0;
}