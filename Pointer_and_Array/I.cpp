#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; // Number of boxes
        scanf("%d", &N);

        int arr[N];
        // Read the numbers into the array
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        // Output the result in reverse order
        printf("Case #%d: ", t);
        for (int i = N - 1; i >= 0; i--) {
            printf("%d", arr[i]);
            if (i > 0) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

