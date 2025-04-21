#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int t, i, j;
    char text[101];

    scanf("%d", &t); getchar(); 

    for (i = 1; i <= t; i++) {
        scanf("%s", &text); getchar();
        int length = strlen(text), flag = 1, count = 0;
        if (text[0] == '.' || text[length-1] == '.') {
            flag = 0;
        } else {
            for (j = 1; j < (length-1); j++) {
                if (text[j] == '.' && text[j+1] == '.') {
                    flag = 0;
                    break;
                }
                else if (text[j] == '.' && text[j+1] != '.') {
                    count++;
                }
            }
        }
        if (flag == 1 && count == 5) {
            printf("Case #%d: YES\n", i);
        } else {
            printf("Case #%d: NO\n", i);
        }
    }
    return 0;
}