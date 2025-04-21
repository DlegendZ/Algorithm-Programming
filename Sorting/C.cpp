#include <stdio.h>
#include <string.h>

struct student_data {
    char student_id[11];
    char student_name[21];
};

void swap_id(char id1[11], char id2[11]) {
    char temp[11];
    strcpy(temp, id1);
    strcpy(id1, id2);
    strcpy(id2, temp);
}

void swap_name(char name1[21], char name2[21]) {
    char temp[21];
    strcpy(temp, name1);
    strcpy(name1, name2);
    strcpy(name2, temp);
}

void qsort(int l, int r, struct student_data data[]) {
    int j, k;
    if (l < r) {
        j = l;
        k = r + 1;
        do {
            do {j++;} while (j <= r && strcmp(data[j].student_id, data[l].student_id) < 0);
            do {k--;} while (k >= l && strcmp(data[k].student_id, data[l].student_id) > 0);
            if (j < k) {
                swap_id(data[j].student_id, data[k].student_id);
                swap_name(data[j].student_name, data[k].student_name);
            }
        } while (j < k);
        swap_id(data[l].student_id, data[k].student_id);
        swap_name(data[l].student_name, data[k].student_name);
        qsort(l, k-1, data);
        qsort(k+1, r, data);
    }
}

int main() {
    int t;


    FILE *f = fopen("testdata.in", "r");

    fscanf(f, "%d\n", &t);

    struct student_data data[t];

    for (int i=0; i<t; i++) {
        fscanf(f, "%s %[^\n]\n", data[i].student_id, data[i].student_name);
    }

    qsort(0, t-1, data);

    for (int i=0; i<t; i++) {
        printf("%s %s\n", data[i].student_id, data[i].student_name);
    }

    fclose(f);
    return 0;
}