#include <stdio.h>
#include <ctype.h>

int main() {
    int t, i, n, j;
    scanf("%d", &t); getchar(); //scanf the testcase
    for (i = 1; i <= t; i++) {
        scanf("%d", &n); getchar(); //scanf the n character
        char text[n+1];
        scanf("%[^\n]", &text); getchar(); //scanf the text
        printf("Case #%d: ", i);
        for (j = 0; j < n; j++) {
            if (isalpha(text[j])) {
                printf("%c", text[j]);
            }
        }
        printf("\n");
    }
    return 0;
}