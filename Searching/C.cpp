#include <stdio.h>

void bubble_sort_asc(int arr[], int total_num) {
    for (int i=0; i<total_num-1; i++) {
        for (int j=0; j<total_num-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
} 

void remove_elements_num(int all_num[], int all_rem[], int total_num, int remove_num) {
    for (int i=0; i<remove_num; i++) {
        for (int j=0; j<total_num; j++) {
            if (all_num[j] == all_rem[i]) {
                all_num[j] = 0;
            }
        }
    }
}

int main() {
    int total_num;

    int remove_num;

    scanf("%d %d", &total_num, &remove_num); getchar();

    int all_num[total_num];

    int all_rem[remove_num];

    for (int i=0; i<total_num; i++) {
        scanf("%d", &all_num[i]); getchar();
    }

    for (int i=0; i<remove_num; i++) {
        scanf("%d", &all_rem[i]); getchar();
    }

    remove_elements_num(all_num, all_rem, total_num, remove_num);

    bubble_sort_asc(all_num, total_num);

    // for (int i=0; i<total_num; i++) {
    //     printf("%d ", all_num[i]);
    // }
    // printf("\n");

    if (all_num[total_num-1] == 0) {
        printf("Maximum number is -1\n");
    } else {
        printf("Maximum number is %d\n", all_num[total_num-1]);
    }
    return 0;
}