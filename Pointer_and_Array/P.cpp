#include <stdio.h>

int main() {
    int N; // Number of teams and size of the room
    scanf("%d", &N);

    int matrix[N][N];
    int counts[N + 1]; // To count members of each team

    // Initialize counts
    for (int i = 0; i <= N; i++) {
        counts[i] = 0;
    }

    // Read the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int value;
            scanf("%d", &value);
            if (value != 0) {
                counts[value]++;
            }
        }
    }

    // Count incomplete teams
    int incompleteTeams = 0;
    for (int i = 1; i <= N; i++) {
        if (counts[i] < N) {
            incompleteTeams++;
        }
    }

    // Output the result
    printf("%d\n", incompleteTeams);

    return 0;
}

