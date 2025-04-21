#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CHAR 26

// Function to count distinct characters in a string
int countDistinctCharacters(char *str) {
    bool charExists[MAX_CHAR] = {false};
    int distinctCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a'; // Map 'a' to 0, 'b' to 1, ..., 'z' to 25
        if (!charExists[index]) {
            charExists[index] = true;
            distinctCount++;
        }
    }

    return distinctCount;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char username[100005];
        scanf("%s", username);

        int distinctCount = countDistinctCharacters(username);

        // Determine the gender based on the number of distinct characters
        printf("Case #%d: ", t);
        if (distinctCount % 2 == 0) {
            printf("Yay\n"); // Female
        } else {
            printf("Ewwww\n"); // Male
        }
    }

    return 0;
}

