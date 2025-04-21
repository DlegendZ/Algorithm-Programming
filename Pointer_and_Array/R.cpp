#include <stdio.h>
#include <string.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char str[1001];
        scanf("%s", str);

        int M; // Number of transformations
        scanf("%d", &M);

        char map[26];
        for (int i = 0; i < 26; i++) {
            map[i] = 'a' + i; // Initialize transformation map
        }

        for (int i = 0; i < M; i++) {
            char A, B;
            scanf(" %c %c", &A, &B);
            for (int j = 0; j < 26; j++) {
                if (map[j] == A) {
                    map[j] = B; // Update transformation map
                }
            }
        }

        // Apply transformations to the string
        for (int i = 0; i < strlen(str); i++) {
            str[i] = map[str[i] - 'a'];
        }

        // Output the transformed string
        printf("Case #%d: %s\n", t, str);
    }

    return 0;
}

