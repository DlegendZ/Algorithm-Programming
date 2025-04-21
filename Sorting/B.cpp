#include <stdio.h>
#include <string.h>

void swap_str(char text1[41], char text2[41]) {
    char temp[41];
    strcpy(temp, text1);
    strcpy(text1, text2);
    strcpy(text2, temp);
}

void swap_num(long long int num1, long long int num2) {
    long long int temp = num1;
    num1 = num2;
    num2 = temp;
}

void qsort(int l, int r, char arr[][41], long long int num[]) {
    int j, k;
    if (l < r) {
        j = l;
        k = r + 1;
        do {
            do {j++;} while (j <= r && strcmp(arr[j], arr[l]) < 0);
            do {k--;} while (k >= l && strcmp(arr[k], arr[l]) > 0);
            if (j < k) {
                swap_str(arr[j], arr[k]); 
                swap_num(num[j], num[k]);
            }
        } while (j<k);
        swap_str(arr[l], arr[k]);
        swap_num(num[l], num[k]);
        qsort(l, k-1, arr, num);
        qsort(k+1, r, arr, num);
    }
}

int main() {
    int t;
    
    FILE *f = fopen("testdata.in", "r");

    fscanf(f, "%d\n", &t);

    long long int string_num[t] = {};
    char arr[t][41];
    for (int i=0; i<t; i++) {
        fscanf(f, "%lld#%[^\n]\n", &string_num[i], arr[i]);
    }

    qsort(0, t-1, arr, string_num);

    for (int i=0; i<t; i++) {
        printf("%lld %s\n", string_num[i], arr[i]);
    }

    fclose(f);
    return 0;
}