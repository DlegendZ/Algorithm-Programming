#include <stdio.h>

int main() {
    int N; // Size of the array
    scanf("%d", &N);

    int A[N], B[N], result[N];

    // Read the sequence of indices
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Read the values
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    // Place values in the array according to the indices
    for (int i = 0; i < N; i++) {
        result[A[i]] = B[i];
    }

    // Print the result
    for (int i = 0; i < N; i++) {
        printf("%d", result[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

