#include <stdio.h>

long long int count(long long int n) {
    return (n*(n+1)*(2*n+1))/6;
}

void binary_search(long long int m) {
    long long int left = 1;
    long long int right = 10000000;
    long long int result;

    while (left <= right) {
        long long int middle = (left + right)/2;

        if (count(middle) >= m) {
            result = middle;
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }

    printf("%lld\n", result);
}

int main() {
    long long int t;
    scanf("%lld", &t); getchar();

    for (int i=0; i<t; i++) {
        long long int m;
        scanf("%lld", &m); getchar();

        printf("Case #%lld: ", i+1);
        binary_search(m);
    }
    return 0;
}