#include <stdio.h>

void swap(int *j, int *k) {
    int temp = *j;
    *j = *k;
    *k = temp;
}

void quick_sort(int L, int R, int arr[]) {
    int j, k;
    if (L < R) {
        j = L;
        k = R + 1;
        do {
            do { j = j + 1; } while (j <= R && arr[j] < arr[L]);
            do { k = k - 1; } while (k >= L && arr[k] > arr[L]);
            if (j < k) swap(&arr[j], &arr[k]);
        } while (j < k); // Fixed condition
        swap(&arr[L], &arr[k]);
        quick_sort(L, k - 1, arr);
        quick_sort(k + 1, R, arr);
    }
}


int main() {
    int t;
    scanf("%d", &t); getchar();

    int arr[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
        if (i != t - 1) scanf(" ");
        else getchar();
    }

    quick_sort(0, t - 1, arr);

    int max_diff = 0;
    int pairs[t][2]; // To store the pairs
    int count = 0;

    for (int i = 0; i < t - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff > max_diff) {
            max_diff = diff;
            count = 0; // Reset count for new max_diff
            pairs[count][0] = arr[i];
            pairs[count][1] = arr[i + 1];
            count++;
        } else if (diff == max_diff) {
            pairs[count][0] = arr[i];
            pairs[count][1] = arr[i + 1];
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d %d", pairs[i][0], pairs[i][1]);
        if (i != count-1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
