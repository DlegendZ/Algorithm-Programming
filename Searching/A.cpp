#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct dictionary {
    char short_word[51];
    char original_word[51];
};

void check(char text[101], struct dictionary data[], int max_list) {
    char word[101];
    int count = 0;
    int text_len = strlen(text);
    for (int i=0; i<=text_len; i++) {
        if (isalpha(text[i])) {
            word[count] = text[i];
            count++;
        } else {
            word[count] = '\0';
            count = 0;
        }

        if (!count) {
            int found = 0;
            for (int j=0; j<max_list; j++) {
                if (strcmp(data[j].short_word, word) == 0) {
                    found = 1;
                    printf("%s", data[j].original_word);
                    break;
                }
            }

            if (!found) {
                printf("%s", word);
            }

            if (text[i] == '\0') {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
}

int main() {
    int t; //amount of dictionary

    FILE *f = fopen("testdata.in", "r");

    fscanf(f, "%d\n", &t);

    struct dictionary data[t];

    for (int i=0; i<t; i++) {
        fscanf(f, "%[^#]#%[^\n]\n", data[i].short_word, data[i].original_word);
    }

    int n; //amount of testcase

    fscanf(f, "%d\n", &n);

    char test_text[n][101];

    for (int i=0; i<n; i++) {
        fscanf(f, "%[^\n]\n", test_text[i]);

        printf("Case #%d:\n", i+1);
        check(test_text[i], data, t);
    }

    fclose(f);
    return 0;
}

