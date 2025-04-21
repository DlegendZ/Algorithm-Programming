#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
        char text_inputted[101];
        scanf("%[^\n]", text_inputted); getchar();

        char text_temp[101];
        for (int j=0; j<strlen(text_inputted); j++) {
            text_temp[j] = text_inputted[strlen(text_inputted) - 1 - j];
            if (isalpha(text_temp[j])) {
                if (isupper(text_temp[j])) {
                    text_temp[j] = tolower(text_temp[j]);
                }
                else if (islower(text_temp[j])) {
                    text_temp[j] = toupper(text_temp[j]);
                }
            }
        }
        text_temp[strlen(text_inputted)] = '\0';

        printf("%s\n", text_temp);
    return 0;
}