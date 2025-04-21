#include <stdio.h>

void swap(long long int *num1, long long int *num2) {
    long long int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void qsort(int l, int r, long long int number_num[]) {
    int j, k;
    if (l < r) {
        j = l;
        k = r + 1;
        do {
            do {j++;} while (j<=r && (number_num[j] < number_num[l]));
            do {k--;} while (k>=l && (number_num[k] > number_num[l]));
            if (j < k) {
                swap(&number_num[j], &number_num[k]);
            }
        } while (j < k);
        swap(&number_num[l], &number_num[k]);
        qsort(l, k-1, number_num);
        qsort(k+1, r, number_num);
    }
}

double median(int n, long long int number_num[]) {
    //check if data is even or odd
    double median_val;
    if (n%2 == 0) {
        median_val = (number_num[n/2 - 1] + number_num[n/2])/2.00;
    } else {
        median_val = number_num[int(n/2)];
    }
    return median_val;
}

int main() {
    int t;
    scanf("%d", &t); getchar();

    for (int i=0; i<t; i++) {
        int n;
        scanf("%d", &n); getchar();

        long long int number_num[n];
        long long int total_sum = 0;
        for (int j=0; j<n; j++) {
            scanf("%lld", &number_num[j]);
            total_sum += number_num[j];
        }

        qsort(0, n-1, number_num);

        double mean = double(total_sum) / double(n);

        double median_value = median(n, number_num);

        printf("Case #%d:\n", i+1);
        printf("Mean : %.2lf\n", mean);
        printf("Median : %.2lf\n", median_value);
    }
    return 0;
}