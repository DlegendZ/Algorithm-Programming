#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; // Number of test results
        scanf("%d", &N);

        int failedTests = 0;

        int testResults[N], minResults[N];

        // Read test results
        for (int i = 0; i < N; i++) {
            scanf("%d", &testResults[i]);
        }

        // Read minimum passing results
        for (int i = 0; i < N; i++) {
            scanf("%d", &minResults[i]);
        }

        // Count the number of failed tests
        for (int i = 0; i < N; i++) {
            if (testResults[i] < minResults[i]) {
                failedTests++;
            }
        }

        // Output the result for the current test case
        printf("Case #%d: %d\n", t, failedTests);
    }

    return 0;
}

