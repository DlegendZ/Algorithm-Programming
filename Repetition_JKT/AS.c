#include <stdio.h>

int main() {
    int t, i, j, n;
    scanf("%d", &t); getchar(); //scanf how many testcase
    for (i = 1; i <= t; i++) {
        scanf("%d", &n); getchar(); //scanf the amount of questions
        char s[n+1], k[n+1];
        int true = 0;
        scanf("%s", &s); getchar(); //scanf the answer string for lili
        scanf("%s", &k); getchar(); //scanf the asnwer string for bibi
        for (j = 0; j < n; j++) {
            if (s[j] == k[j]) {
                true += 1;
            }
        }
        int score = (true * 100) / n;
        printf("Case #%d: %d\n", i, score);
    }
    return 0;
}
