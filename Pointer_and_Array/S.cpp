#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int result = 0, multiplier = 1;

        // Perform addition without carry
        while (A > 0 || B > 0) {
            int digitA = A % 10;
            int digitB = B % 10;

            int sum = (digitA + digitB) % 10; // Add digits without carry
            result += sum * multiplier;

            A /= 10;
            B /= 10;
            multiplier *= 10;
        }

        // Output the result
        printf("Case #%d: %d\n", t, result);
    }

    return 0;
}

