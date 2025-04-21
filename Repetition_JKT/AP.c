#include <stdio.h>

int main() {
    int i, t, j, k, n;
    scanf("%d", &t); getchar(); //scanf the testcase
    for (i = 1; i <= t; i++) {
        scanf("%d %d", &n, &k); getchar(); //scanf the number of letter and the k
        char text[n+1]; //add 1 because of null terminator
        scanf("%s", &text); getchar();
        for (j = 0; j < n; j++) {
            int num = text[j] - 97;
            num += k;
            while (num > 25) {
                int leftover = num / 26;
                num -= (26*leftover);
            }
            num += 97;
            text[j] = (char)num;
        }
        printf("Case #%d: %s\n", i, text);
    }
    return 0;
}
