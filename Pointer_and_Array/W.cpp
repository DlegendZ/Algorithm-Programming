#include <stdio.h>

int is_sum_of_two(int target, int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] + arr[j] == target) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int cool_factor = 0;
        for (int i = 0; i < N; i++) {
            if (is_sum_of_two(arr[i], arr, N)) {
                cool_factor++;
            }
        }

        printf("Case #%d: %d\n", t, cool_factor);
    }

    return 0;
}

