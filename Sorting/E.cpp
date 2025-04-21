#include <stdio.h>
#include <string.h>

struct city_data {
    char city_name[1001];
    char temperature_char;
    float temperature_num;
    float in_celc;
};

void swap_data(struct city_data *data1, struct city_data *data2) {
    struct city_data temp = *data1;
    *data1 = *data2;
    *data2 = temp;
}

void qsort(int l, int r, struct city_data data[101]) {
    int j, k;
    if (l < r) {
        j = l;
        k = r + 1;
        do {
            do {j++;} while (j<=r && (data[j].in_celc < data[l].in_celc ||
            (data[j].in_celc == data[l].in_celc && strcmp(data[j].city_name, data[l].city_name) < 0)));
            do {k--;} while (k>=l && (data[k].in_celc > data[l].in_celc ||
            (data[k].in_celc == data[l].in_celc && strcmp(data[k].city_name, data[l].city_name) > 0)));
            if (j < k) {
                swap_data(&data[j], &data[k]);
            }
        } while (j < k);
        swap_data(&data[l], &data[k]);
        qsort(l, k-1, data);
        qsort(k+1, r, data);
    }
}

int main() {
    FILE *f = fopen("testdata.in", "r");

    struct city_data data[101];
    int count = 0;

    while (!feof(f)) {
        fscanf(f, "%[^#]#%f#%c\n", data[count].city_name, &data[count].temperature_num, &data[count].temperature_char);
        if (data[count].temperature_char == 'F') {
            data[count].in_celc = (data[count].temperature_num - 32.00) * 5/9;
        } else {
            data[count].in_celc = (data[count].temperature_num);
        }
        count++;
    }

    qsort(0, count-1, data);

    for (int i=0; i<count; i++) {
        printf("%s is %.2f%c\n", data[i].city_name, data[i].temperature_num, data[i].temperature_char);
    }
    fclose(f);
    return 0;
}