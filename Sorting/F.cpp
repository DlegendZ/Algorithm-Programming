#include <stdio.h>
#include <string.h>

struct assignment_data {
    char assignment_name[11];
    long long int assignment_dl;
};

void swap_data(struct assignment_data *data1, struct assignment_data *data2) {
    struct assignment_data temp = *data1;
    *data1 = *data2;
    *data2 = temp;
}

void qsort(int l, int r, struct assignment_data data[]) {
    int j, k;
    if (l < r) {
        j = l;
        k = r + 1;
        do {
            do {j++;} while (j<=r && (data[j].assignment_dl < data[l].assignment_dl ||
            data[j].assignment_dl == data[l].assignment_dl && strcmp(data[j].assignment_name, data[l].assignment_name) < 0));
            do {k--;} while (k>=l && (data[k].assignment_dl > data[l].assignment_dl ||
            (data[k].assignment_dl == data[l].assignment_dl && strcmp(data[k].assignment_name, data[l].assignment_name) > 0)));
            if (j < k) {
                swap_data(&data[j],&data[k]);
            } 
        } while (j < k);
        swap_data(&data[l], &data[k]);
        qsort(l, k-1, data);
        qsort(k+1, r, data);
    }
}

int main() {
    int t;
    scanf("%d", &t); getchar();

    struct assignment_data data[t];

    for (int i=0; i<t; i++) {
        scanf("%s %lld", data[i].assignment_name, &data[i].assignment_dl); getchar();
    }

    qsort(0, t-1, data);

    for (int i=0; i<t; i++) {
        printf("%s\n", data[i].assignment_name);
    }
    return 0;
}