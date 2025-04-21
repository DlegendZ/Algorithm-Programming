#include <stdio.h>
#include <string.h>

struct beetuber_data {
    char video_title[1001];
    char artist_name[1001];
    long long int view_count;
};

void swap_data(struct beetuber_data *data1, struct beetuber_data *data2) {
    struct beetuber_data temp = *data1;
    *data1 = *data2;
    *data2 = temp;
}

void qsort(int l, int r, struct beetuber_data data[100]) {
    int j, k;
    if (l < r) {
        j = l;
        k = r + 1;
        do {
            do {j++;} while (j<=r && (data[j].view_count > data[l].view_count ||
            (data[j].view_count == data[l].view_count && strcmp(data[j].video_title, data[l].video_title) > 0)));
            do {k--;} while (k>=l && (data[k].view_count < data[l].view_count || 
            (data[k].view_count == data[l].view_count && strcmp(data[k].artist_name, data[l].artist_name) < 0)));
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

    struct beetuber_data data[100];

    int count = 0;

    while (!feof(f)) {
        fscanf(f, "%[^#]#%[^#]#%d\n", data[count].video_title, data[count].artist_name, &data[count].view_count);
        count++;
    }

    qsort(0, count-1, data);

    for (int i=0; i<count; i++) {
        printf("%s by %s - %d\n", data[i].video_title, data[i].artist_name, data[i].view_count);
    }
    fclose(f);
    return 0;
}