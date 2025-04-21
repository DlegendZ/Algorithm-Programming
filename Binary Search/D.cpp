#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        long long M;
        scanf("%d %lld", &N, &M);

        long long arr[N], prefix_sum[N + 1];
        prefix_sum[0] = 0; // Prefix sum base case

        // Input array and calculate prefix sums
        for (int i = 0; i < N; i++) {
            scanf("%lld", &arr[i]);
            prefix_sum[i + 1] = prefix_sum[i] + arr[i];
        }

        int max_length = -1; // Initialize the maximum segment length

        for (int i = 0; i < N; i++) {
            int left = i + 1, right = N, best = -1;

            // Binary search for the farthest valid index
            while (left <= right) {
                int mid = (left + right) / 2;
                long long segment_sum = prefix_sum[mid] - prefix_sum[i];

                if (segment_sum <= M) {
                    best = mid; // Update best valid index
                    left = mid + 1; // Try to expand the segment
                } else {
                    right = mid - 1; // Shrink the segment
                }
            }

            if (best != -1) {
                int segment_length = best - i;
                if (segment_length > max_length) {
                    max_length = segment_length;
                }
            }
        }

        // Output the result
        printf("Case #%d: %d\n", t, max_length);
    }

    return 0;
}
