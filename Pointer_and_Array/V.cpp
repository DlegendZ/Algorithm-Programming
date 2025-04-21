#include <stdio.h>

long long fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    long long a = 0, b = 1, result;
    for (int i = 3; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        long long likes = fibonacci(N);

        printf("Case #%d: %lld\n", t, likes);
    }

    return 0;
}

