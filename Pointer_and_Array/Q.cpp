#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M, Q; // Number of friends, rooms, and visits
        scanf("%d %d %d", &N, &M, &Q);

        int patterns[N][M]; // Friends' visit patterns
        int lights[M]; // Lights in each room
        int visits[Q]; // Sequence of visiting friends

        // Initialize lights to OFF
        for (int i = 0; i < M; i++) {
            lights[i] = 0;
        }

        // Read friends' patterns
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &patterns[i][j]);
            }
        }

        // Read visiting friends
        for (int i = 0; i < Q; i++) {
            scanf("%d", &visits[i]);
        }

        // Process visits
        for (int i = 0; i < Q; i++) {
            int friendIndex = visits[i] - 1; // Convert to 0-based index
            for (int j = 0; j < M; j++) {
                if (patterns[friendIndex][j] == 1) {
                    lights[j] ^= 1; // Toggle the light
                }
            }
        }

        // Print result for the test case
        printf("Case #%d:\n", t);
        for (int i = 0; i < M; i++) {
            if (lights[i]) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}

