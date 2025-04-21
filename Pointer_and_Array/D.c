#include <stdio.h>

int main() {
    int X, Y, T;

    // Read the dimensions of the garden
    scanf("%d %d", &X, &Y);

    // Create a 2D array to store the garden configuration
    int garden[X][Y];

    // Read the initial garden configuration
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            scanf("%d", &garden[i][j]);
        }
    }

    // Read the number of changes
    scanf("%d", &T);

    // Process each change
    for (int t = 0; t < T; t++) {
        int a, b, c;
        // Read the change (a, b, c)
        scanf("%d %d %d", &a, &b, &c);
        
        // Update the plant at position (a-1, b-1) to type c
        garden[a-1][b-1] = c;
    }

    // Output the final state of the garden
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            printf("%d", garden[i][j]);
            if (j < Y - 1) {
                printf(" "); // Ensure no trailing spaces at the end of each line
            }
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
