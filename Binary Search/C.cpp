#include <stdio.h>

void sum_index(long long int sum[], long long int num_list[], long long int max) {
    sum[0] = num_list[0];
    for (int i=1; i<max; i++) {
        sum[i] = sum[i-1] + num_list[i];
    }
}

void binary_search(long long int num_key, long long int sum[], long long int max) {
    long long int left = 0; long long int right = max-1; long long int result = -1;

    while (left <= right) {
        long long int middle = (left+right)/2;

        if (sum[middle] == num_key) {
            result = middle+1;
            break;
        }
        else if (sum[middle] < num_key) {
            result = middle+1;
            left = middle+1;
        }
        else {
            right = middle-1;
        }
    }

    printf("%lld\n", result);
}


int main() {
    long long int total_num;
    scanf("%lld", &total_num); getchar();

    long long int num_list[total_num];

    for (int i=0; i<total_num; i++) {
        scanf("%lld", &num_list[i]); getchar();
    }

    long long int sum[total_num] = {};

    sum_index(sum, num_list, total_num);

    long long int t;
    scanf("%lld", &t); getchar();
    long long int num_key[t];

    for (int i=0; i<t; i++) {
        scanf("%lld", &num_key[i]); getchar();
        printf("Case #%lld: ", i+1);
        binary_search(num_key[i], sum, total_num);
    }
    return 0;
}