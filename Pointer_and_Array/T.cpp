#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int is_vowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

// Function to get the nearest previous vowel and the distance
char get_nearest_vowel(char c, int *distance) {
    if (is_vowel(c)) {
        *distance = 0;
        return c;
    }

    if (c >= 'B' && c <= 'D') {
        *distance = c - 'A';
        return 'A';
    } else if (c >= 'F' && c <= 'H') {
        *distance = c - 'E';
        return 'E';
    } else if (c >= 'J' && c <= 'N') {
        *distance = c - 'I';
        return 'I';
    } else if (c >= 'P' && c <= 'T') {
        *distance = c - 'O';
        return 'O';
    } else if (c >= 'V' && c <= 'Z') {
        *distance = c - 'U';
        return 'U';
    }

    *distance = 0; // Default case, should not happen
    return c;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char message[1001]; // Original message
        scanf("%s", message);

        char encrypted[1001]; // Encrypted message
        char key[1001];       // Key for decryption
        int length = strlen(message);

        for (int i = 0; i < length; i++) {
            int distance;
            encrypted[i] = get_nearest_vowel(message[i], &distance);
            key[i] = '0' + distance; // Convert distance to a character
        }
        encrypted[length] = '\0';
        key[length] = '\0';

        // Output the results
        printf("Case #%d:\n", t);
        printf("%s\n", encrypted);
        printf("%s\n", key);
    }

    return 0;
}

