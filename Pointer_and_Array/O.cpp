#include <stdio.h>
#include <stdbool.h>

int main() {
    int N; // Size of the matrix
    scanf("%d", &N);

    int matrix[N][N];
    bool valid = true;

    // Read the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check rows for duplicates
    for (int i = 0; i < N && valid; i++) {
        bool rowCheck[N + 1];
        for (int k = 1; k <= N; k++) {
            rowCheck[k] = false;
        }
        for (int j = 0; j < N; j++) {
            if (rowCheck[matrix[i][j]]) {
                valid = false;
                break;
            }
            rowCheck[matrix[i][j]] = true;
        }
    }

    // Check columns for duplicates
    for (int j = 0; j < N && valid; j++) {
        bool colCheck[N + 1];
        for (int k = 1; k <= N; k++) {
            colCheck[k] = false;
        }
        for (int i = 0; i < N; i++) {
            if (colCheck[matrix[i][j]]) {
                valid = false;
                break;
            }
            colCheck[matrix[i][j]] = true;
        }
    }

    if (valid) {
        printf("Yay\n");
    } else {
        printf("Nay\n");
    }

    return 0;
}

