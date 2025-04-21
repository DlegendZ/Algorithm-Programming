#include <stdio.h>

#define MAX 50

// Function to multiply two matrices
void multiplyMatrices(int n, int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0; // Initialize the result matrix element to 0
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);

        int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX];
        int tempResult[MAX][MAX], finalResult[MAX][MAX];

        // Input first matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &mat1[i][j]);
            }
        }

        // Input second matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &mat2[i][j]);
            }
        }

        // Input third matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &mat3[i][j]);
            }
        }

        // Multiply first two matrices
        multiplyMatrices(n, mat1, mat2, tempResult);

        // Multiply the result with the third matrix
        multiplyMatrices(n, tempResult, mat3, finalResult);

        // Output the result for this test case
        printf("Case #%d:\n", t);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", finalResult[i][j]);
                if (j < n - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}

