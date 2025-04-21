#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int max1 = -1000001, max2 = -1000001;
        int value;

        // Read values and find the two largest numbers
        for (int i = 0; i < N; i++) {
            scanf("%d", &value);
            if (value > max1) {
                max2 = max1;
                max1 = value;
            } else if (value > max2) {
                max2 = value;
            }
        }

        // Output the result
        printf("Case #%d: %d\n", t, max1 + max2);
    }

    return 0;
}

