#include <stdio.h>
#include <string.h>

void reverse_segment(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int Q;
        char code[1001];
        scanf("%d %s", &Q, code);

        for (int i = 0; i < Q; i++) {
            int L, R;
            scanf("%d %d", &L, &R);
            reverse_segment(code, L - 1, R - 1); // Convert to 0-based index
        }

        // Print result for each test case
        printf("Case #%d: %s\n", t, code);
    }

    return 0;
}

