#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; // Size of the wind map
        scanf("%d", &N);

        long int windMap[N][N]; // Declare the wind map
        long int columnSums[N]; // To store column sums

        // Initialize column sums to 0
        for (int i = 0; i < N; i++) {
            columnSums[i] = 0;
        }

        // Input the wind map and calculate column sums
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%ld", &windMap[i][j]);
                columnSums[j] += windMap[i][j];
            }
        }

        // Print the result for the current test case
        printf("Case #%d: ", t);
        for (int i = 0; i < N; i++) {
            printf("%ld", columnSums[i]);
            if (i < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

