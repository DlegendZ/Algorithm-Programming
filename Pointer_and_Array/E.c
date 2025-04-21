#include <stdio.h>

int main() {
    int T;  // Number of test cases

    // Read the number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int X;

        // Read the size of the square matrix (X × X)
        scanf("%d", &X);

        int matrix[X][X];
        int column_sums[X];  // Array to store the sum of each column

        // Initialize the column sums to 0
        for (int i = 0; i < X; i++) {
            column_sums[i] = 0;
        }

        // Read the matrix and calculate the column sums
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < X; j++) {
                scanf("%d", &matrix[i][j]);
                column_sums[j] += matrix[i][j];  // Add to the corresponding column sum
            }
        }

        // Print the result for the current test case
        printf("Case #%d:", t);
        for (int i = 0; i < X; i++) {
            printf(" %d", column_sums[i]);
        }
        printf("\n");
    }

    return 0;
}
