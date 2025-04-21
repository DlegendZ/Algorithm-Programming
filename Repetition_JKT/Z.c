#include <stdio.h>

int main() {
    int i, n, k, position = 0;
    scanf("%d", &n); getchar(); //scanf n times
    for (i = 1; i <= n; i++) {
        scanf("%d", &k); getchar();
        position += k;
        if (position == 12) {
            position = 28;
        }
        else if (position == 35) {
            position = 7;
        }
        else if (position == 30) {
            position = 10;
        }

        if (position >= 40) {
            position -= 40;
        }
    }
    printf("%d\n", position);
    return 0;
}