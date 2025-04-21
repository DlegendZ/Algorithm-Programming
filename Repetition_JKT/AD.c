#include <stdio.h>

int main() {
    int n, i, j, h;
    scanf("%d", &n);
    int type[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &type[i]);
    }
    int max_same = 0;
    for (j = 0; j < n; j++) {
        int same = 0;
        for (h = 0; h < n; h++) {
            if (type[j] == type[h]) {
                same += 1;
            }
        }
        if (max_same < same) {
            max_same = same;
        }
    }
    printf("%d\n", max_same);
    return 0;
}