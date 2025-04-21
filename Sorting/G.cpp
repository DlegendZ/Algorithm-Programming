#include <stdio.h>

// int swap_times;

// void swap(int *num1, int *num2) {
//     int temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
//     swap_times++;
// }

// void qsort(int l, int r, int carriage_num[]) {
//     int j, k;
//     if (l < r) {
//         j = l;
//         k = r + 1;
//         do {
//             do {j++;} while (j<=r && (carriage_num[j] < carriage_num[l]));
//             do {k--;} while (k>=l && (carriage_num[k] > carriage_num[l]));
//             if (j < k) {
//                 swap(&carriage_num[j], &carriage_num[k]);
//             }
//         } while (j < k);
//         swap(&carriage_num[l], &carriage_num[k]);
//         qsort(l, k-1, carriage_num);
//         qsort(k+1, r, carriage_num);
//     }
// }

int swap_times = 0;

void bubble_sort(int max, int carriage_num[]) {
    for (int i=0; i<max-1; i++) {
        for (int j=0; j<max-1-i; j++) {
            if (carriage_num[j] > carriage_num[j+1]) {
                int temp = carriage_num[j];
                carriage_num[j] = carriage_num[j+1];
                carriage_num[j+1] = temp;
                swap_times++;
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t); getchar();

    for (int i=0; i<t; i++) {
        swap_times = 0;
        int n; //total carriages
        int x; //total time needed per carriage

        scanf("%d %d", &n, &x);

        int carriage_num[n];
        for (int j=0; j<n; j++) {
            scanf("%d", &carriage_num[j]);
        }
        getchar();

        bubble_sort(n, carriage_num);

        long long int time_spent = swap_times * x;

        printf("Case #%d: %lld\n", i+1, time_spent);
    }
    return 0;
}