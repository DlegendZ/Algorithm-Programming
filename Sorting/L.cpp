#include <stdio.h>

// Function to swap two integers
void swap(int *data1, int *data2) {
    int temp = *data1;
    *data1 = *data2;
    *data2 = temp;
}

// Quicksort function to sort the array
void qsort(int l, int r, int student_height[]) {
    int j, k;
    if (l < r) {
        j = l;
        k = r + 1;
        do {
            do { j++; } while (j <= r && student_height[j] < student_height[l]);
            do { k--; } while (k >= l && student_height[k] > student_height[l]);
            if (j < k) {
                swap(&student_height[j], &student_height[k]);
            }
        } while (j < k);
        swap(&student_height[l], &student_height[k]);
        qsort(l, k - 1, student_height);
        qsort(k + 1, r, student_height);
    }
}

// Binary search function to find the position of a height
int binary_search(int student_height[], int l, int r, int target) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (student_height[mid] == target) {
            return mid + 1; // Return 1-based index
        } else if (student_height[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1; // Not found
}

int main() {
    int student_num;
    scanf("%d", &student_num);

    int student_height[student_num];
    for (int i = 0; i < student_num; i++) {
        scanf("%d", &student_height[i]);
    }

    // Sort the array
    qsort(0, student_num - 1, student_height);

    int req_num;
    scanf("%d", &req_num);

    for (int i = 0; i < req_num; i++) {
        int req_height;
        scanf("%d", &req_height);
        // Perform binary search and print the result
        printf("%d\n", binary_search(student_height, 0, student_num - 1, req_height));
    }

    return 0;
}
