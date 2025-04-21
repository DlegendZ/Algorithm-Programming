#include <stdio.h>
#include <string.h>

void search(char student_id[][11], char student_name[][21], char search_id[], int student_num) {
    int found = 0;
    for (int i=0; i<student_num; i++) {
        if (strcmp(search_id, student_id[i]) == 0) {
            printf("%s\n", student_name[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("N/A\n");
    }
}

int main() {
    int student_num;

    FILE *f = fopen("testdata.in", "r");

    fscanf(f, "%d\n", &student_num); 

    char student_id[student_num][11];
    char student_name[student_num][21];

    for (int i=0; i<student_num; i++) {
        fscanf(f, "%s %[^\n]\n", student_id[i], student_name[i]);
    }

    int search_num;

    fscanf(f, "%d\n", &search_num);

    for (int i=0; i<search_num; i++) {
        char search_id[11];
        fscanf(f, "%[^\n]\n", search_id);
        printf("Case #%d: ", i+1);
        search(student_id, student_name, search_id, student_num);
    }
    return 0;
}