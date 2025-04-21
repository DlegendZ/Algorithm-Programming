#include <stdio.h>

int main() {
    int n, i, jojo, lili, bibi, participants;
    scanf("%d", &n); getchar();
    scanf("%d %d %d", &jojo, &lili, &bibi); getchar();
    int result = jojo + lili + bibi;
    for(i = 0; i < n; i++) {
        scanf("%d", &participants);
        result += participants;
    }
    int average = result/(3+n);
    if (jojo < average) {
        printf("Jojo tidak lolos\n");
    }
    else {
        printf("Jojo lolos\n");
    }
    if (lili < average) {
        printf("Lili tidak lolos\n");
    }
    else {
        printf("Lili lolos\n");
    }
    if (bibi < average) {
        printf("Bibi tidak lolos\n");
    }
    else {
        printf("Bibi lolos\n");
    }
    return 0;
}