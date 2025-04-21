#include <stdio.h>

int main() {
    int N, Q;

    // Input array size
    scanf("%d", &N);

    long long arr[N], prefix_sum[N + 1];
    prefix_sum[0] = 0; // Initialize prefix sum base case

    // Input array and compute prefix sums
    for (int i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
        prefix_sum[i + 1] = prefix_sum[i] + arr[i];
    }

    // Input number of queries
    scanf("%d", &Q);

    for (int q = 1; q <= Q; q++) {
        long long M;
        scanf("%lld", &M);

        int max_length = 0;
        int left = 0; // Left pointer for the sliding window

        // Sliding window approach
        for (int right = 1; right <= N; right++) {
            // Move the left pointer to maintain the sum <= M
            while (prefix_sum[right] - prefix_sum[left] > M && left < right) {
                left++;
            }

            // Calculate the current segment length
            int length = right - left;
            if (length > max_length) {
                max_length = length;
            }
        }

        // If no valid segment is found, output -1
        if (max_length == 0) {
            printf("Case #%d: -1\n", q);
        } else {
            printf("Case #%d: %d\n", q, max_length);
        }
    }

    return 0;
}
