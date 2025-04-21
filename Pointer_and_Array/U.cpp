#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int numbers[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &numbers[i]);
        }

        int P, Q; // Positions of Bibi and Lili
        scanf("%d %d", &P, &Q);

        int bibiValue = numbers[P - 1];
        int liliValue = numbers[Q - 1];

        printf("Case #%d : ", t);
        if (bibiValue > liliValue) {
            printf("Bibi\n");
        } else if (liliValue > bibiValue) {
            printf("Lili\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}

