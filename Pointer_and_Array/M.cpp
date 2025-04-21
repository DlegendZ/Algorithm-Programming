#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; // Size of the table
        scanf("%d", &N);

        int table[N][N], colSum[N];
        
        // Initialize column sums to 0
        for (int i = 0; i < N; i++) {
            colSum[i] = 0;
        }

        // Read the table and compute column sums
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &table[i][j]);
                colSum[j] += table[i][j];
            }
        }

        // Print the result
        printf("Case #%d: ", t);
        for (int i = 0; i < N; i++) {
            printf("%d", colSum[i]);
            if (i < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

