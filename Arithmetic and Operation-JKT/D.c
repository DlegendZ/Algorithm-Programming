#include <stdio.h>
#include <math.h>

int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    m += 1;
    for (i = m; i > 0; i--) {
        printf("%d\n", n);
        n++;
    }
}