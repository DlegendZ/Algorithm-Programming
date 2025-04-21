#include <stdio.h>
#include <string.h>

int main() {
    int N; // Number of strings to reverse
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        char S[1001]; // String input
        scanf("%s", S);

        int len = strlen(S);
        printf("Case #%d : ", i);
        for (int j = len - 1; j >= 0; j--) {
            printf("%c", S[j]);
        }
        printf("\n");
    }

    return 0;
}

