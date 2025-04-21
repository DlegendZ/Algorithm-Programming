#include <stdio.h>
#include <string.h>

struct student {
    char student_name[11];
    int student_score;
};

void bubble_sort_asc(int student_num, struct student data[]) {
    for (int i=0; i<student_num-1; i++) {
        for (int j=0; j<student_num-1-i; j++) {
            if (data[j].student_score < data[j+1].student_score) {
                struct student temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
            else if (data[j].student_score == data[j+1].student_score) {
                if (strcmp(data[j].student_name, data[j+1].student_name) > 0) {
                    struct student temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                }
            }
        }
    }
}

void search(char student_ask[], struct student data[], int student_num) {
    for (int i=0; i<student_num; i++) {
        if (strcmp(student_ask, data[i].student_name) == 0) {
            printf("%d\n", i+1);  
            break;  
        }
    }
}

int main() {
    int t;

    scanf("%d", &t); getchar();

    for (int i=0; i<t; i++) {
        int student_num;
        scanf("%d", &student_num); getchar();

        struct student data[student_num];

        for (int j=0; j<student_num; j++) {
            scanf("%[^#]#%d", data[j].student_name, &data[j].student_score); getchar();
        }

        char student_ask[11];

        scanf("%[^\n]", student_ask); getchar();

        printf("Case #%d: ", i+1);

        bubble_sort_asc(student_num, data);

        // for (int j=0; j<student_num; j++) {
        //     printf("%s\n", data[j].student_name);
        // }

        search(student_ask, data, student_num);

    }
    return 0;
}
