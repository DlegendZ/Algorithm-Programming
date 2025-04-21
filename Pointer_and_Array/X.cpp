#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M;
        scanf("%d %d", &N, &M);

        long long total_weight = 0;

        for (int i = 0; i < N; i++) {
            long long max_weight = 0;
            for (int j = 0; j < M; j++) {
                long long weight;
                scanf("%lld", &weight);
                if (weight > max_weight) {
                    max_weight = weight;
                }
            }
            total_weight += max_weight;
        }

        // Print result for each test case
        printf("Case #%d: %lld\n", t, total_weight);
    }

    return 0;
}

