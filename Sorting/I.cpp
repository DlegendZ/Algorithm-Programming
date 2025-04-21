#include <stdio.h>

int minimum = 0;

void swap(int *data1, int *data2) {
    int temp = *data1;
    *data1 = *data2;
    *data2 = temp;
}

void qsort(int l, int r, int student_height[]) {
    int j,k;
    if (l<r) {
        j=l;
        k=r+1;
        do {
            do {j++;} while(j<=r && student_height[j] < student_height[l]);
            do {k--;} while (k>=l && student_height[k] > student_height[l]);
            if (j<k) {
                swap(&student_height[j], &student_height[k]);
            } 
        } while (j < k);
        swap(&student_height[l], &student_height[k]);
        qsort(l, k-1, student_height);
        qsort(k+1, r, student_height);
    } 
}

void division(int student_height[], int student_num) {
    int half = student_num/2;
    int difference;

    for (int i=0; i<half-1; i++) {
        difference = student_height[i+1] - student_height[i];
        if (difference > minimum || minimum == 0) {
            minimum = difference;
        }
    }

    for (int i=half; i<student_num-1; i++) {
        difference = student_height[i+1] - student_height[i];
        if (difference > minimum || minimum == 0) {
            minimum = difference;
        }
    }
}

int main() {
    int t; 
    scanf("%d", &t); getchar();

    for (int i=0; i<t; i++) {
        int student_num;
        minimum = 0;
        scanf("%d", &student_num); getchar();

        int student_height[student_num];

        for (int j=0; j<student_num; j++) {
            scanf("%d", &student_height[j]); getchar();
        }

        qsort(0, student_num-1, student_height);

        division(student_height, student_num);

        printf("Case #%d: %d\n", i+1, minimum);
    }
    return 0;
}