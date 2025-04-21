#include <stdio.h> 

int main() {
    int t, i, j, k, n;
    char string[101];

    FILE *fp;

    fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &t);

    for (i = 0; i < t; i++) {
        fscanf(fp, "%[^\n]\n", string);
        fscanf(fp, "%d\n", &n);

        int checked[27] = {0};

        for (j = 0; j < n; j++) {
            char a, b;

            fscanf(fp, " %c %c", &a, &b);
            fgetc(fp); // Consume any leftover newline character

            if (checked[a - 'A'] == 0) {
                for (k = 0; string[k] != '\0'; k++) {
                    if (string[k] == a) {
                        string[k] = b;
                    }
                }
                checked[a - 'A'] = 1;
            }
        }

        int count[26] = {0};

        for (j = 0; string[j] != '\0'; j++) {
            if (string[j] >= 'A' && string[j] <= 'Z') {
                count[string[j] - 'A']++;
            }
        }

        for (j = 0; j < 26; j++) {
            if (count[j] > 0) {
                printf("%c %d\n", j + 'A', count[j]);
            }
        }
    }

    return 0;
}

