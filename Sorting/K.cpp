#include <stdio.h>

void bubble_sort_asc(long long int num[], long long int max) {
    for (int i=0; i<max-1; i++) {
        for (int j=0; j<max-1-i; j++) {
            if (num[j] > num[j+1]) {
                long long int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
}

int main() {
    long long int t;
    scanf("%lld", &t); getchar();

    long long int num[25];

    for (int i=0; i<t; i++) {
        for (int j=0; j<25; j++) {
            scanf("%lld", &num[j]); 
        }
        getchar();

        bubble_sort_asc(num, 25);

        long long int smallest = num[0];
        long long int largest = num[24];

        long long int m[5];

        m[0] = smallest/2;
        m[4] = largest/2;
        m[1] = num[1] - m[0];
        m[3] = num[23] - m[4];
        m[2] = num[4] - m[0];

        printf("Case #%lld: %lld %lld %lld %lld %lld\n", i+1, m[0], m[1], m[2], m[3], m[4]);
    }
    return 0;
}
