#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void display_out(int *num_selection) { //module to display options
    while (1) { 
        printf("What do you want to do?\n");
        printf("1. Display data\n");
        printf("2. Search Data\n");
        printf("3. Sort Data\n");
        printf("4. Export Data\n");
        printf("5. Exit\n");
        printf("Your choice: ");
        int is_int = scanf("%d", num_selection);
        while (getchar() != '\n');
        if (is_int == 1 && *num_selection >= 1 && *num_selection <= 5) {
            break;
        } else {
            printf("Invalid input. Please enter an integer between 1 and 5.\n\n");
        }
    }
    return;
}
struct menu { //struct var for value in table
    char menu_header[51];
};
struct file_data { //struct var for total_lines
    int count_line;
};
struct menu data[4000][8]; //declare global var for struct menu
struct file_data info; //declare global var for struct file_data
void read_file() { //module to read the csv file
    FILE *f = fopen("file.csv", "r");
    int count_line = 0;
    for (int i=0; !feof(f); i++) {
        fscanf(f, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", 
            data[i][0].menu_header, data[i][1].menu_header, data[i][2].menu_header, 
            data[i][3].menu_header, data[i][4].menu_header, data[i][5].menu_header, 
            data[i][6].menu_header, data[i][7].menu_header);
        count_line++;
    }
    //rename menu headers
    strcpy(data[0][0].menu_header, "Location");
    strcpy(data[0][1].menu_header, "City");
    strcpy(data[0][2].menu_header, "Price");
    strcpy(data[0][3].menu_header, "Rooms");
    strcpy(data[0][4].menu_header, "Bathroom");
    strcpy(data[0][5].menu_header, "Carpark");
    strcpy(data[0][6].menu_header, "Type");
    strcpy(data[0][7].menu_header, "Furnish");
    info.count_line = count_line;
    fclose(f);
}
void display_data(int num_rows) { //module to display data
    if (num_rows <= 0) {
        printf("Invalid output.\n");
        return;
    }
    int count_line = info.count_line;
    if (num_rows > count_line) {
        num_rows = count_line-1;
    }
    for (int i=0; i<=num_rows; i++) {
        printf("%-25s\t%-17s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", 
            data[i][0].menu_header, data[i][1].menu_header, data[i][2].menu_header, 
            data[i][3].menu_header, data[i][4].menu_header, data[i][5].menu_header, 
            data[i][6].menu_header, data[i][7].menu_header);
    }
}
void search_data(char search_key[51], char detailed_key[51]) { //module to search data 
    int sort_col = -1;
    int count_line = info.count_line;
    for (int i=0; i<8; i++) {
        if (strcmp(data[0][i].menu_header, search_key) == 0) {
            sort_col = i;
            break;
        }
    }
    int found = 0;
    for (int i=1; i<count_line; i++) {
        if (strcmp(data[i][sort_col].menu_header, detailed_key) == 0) {
            found++;
            if (found == 1) {
                printf("Data found. Detail of data:\n");
                printf("%-25s\t%-17s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", 
                    data[0][0].menu_header, data[0][1].menu_header, data[0][2].menu_header, 
                    data[0][3].menu_header, data[0][4].menu_header, data[0][5].menu_header, 
                    data[0][6].menu_header, data[0][7].menu_header);
            }
            printf("%-25s\t%-17s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", 
                data[i][0].menu_header, data[i][1].menu_header, data[i][2].menu_header, 
                data[i][3].menu_header, data[i][4].menu_header, data[i][5].menu_header, 
                data[i][6].menu_header, data[i][7].menu_header);
        }
    }
    if (!found || sort_col == -1) {
        printf("Data not found!\n");
    }
}
void swap(int j, int k) { //module to swap data
    for (int i=0; i<8; i++) {
        struct menu temp = data[j][i];
        data[j][i] = data[k][i];
        data[k][i] = temp;
    }
}
void bubble_sort_asc(int max, int col) { //module to asc bubble sort
    for (int i = 1; i <= max; i++) {
        for (int j = 1; j <= max - i; j++) {
            if (isdigit(data[j][col].menu_header[0]) && isdigit(data[j + 1][col].menu_header[0])) {
                int num1 = atoi(data[j][col].menu_header);
                int num2 = atoi(data[j + 1][col].menu_header);
                if (num1 > num2) {
                    swap(j, j + 1);
                }
            } else if (strcmp(data[j][col].menu_header, data[j + 1][col].menu_header) > 0) {
                swap(j, j + 1);
            }
        }
    }
}
void bubble_sort_desc(int max, int col) { //module to desc bubble sort
    for (int i = 1; i <= max; i++) {
        for (int j = 1; j <= max - i; j++) {
            if (isdigit(data[j][col].menu_header[0]) && isdigit(data[j + 1][col].menu_header[0])) {
                int num1 = atoi(data[j][col].menu_header);
                int num2 = atoi(data[j + 1][col].menu_header);
                if (num1 < num2) {
                    swap(j, j + 1);
                }
            } else if (strcmp(data[j][col].menu_header, data[j + 1][col].menu_header) < 0) {
                swap(j, j + 1);
            }
        }
    }
}
void sort_data(char col_name[51], char sort_type[21]) { //module to sort data
    int count_line = info.count_line;
    int found = 0;
    for (int i=0; i<8; i++) {
        if (strcmp(data[0][i].menu_header, col_name) == 0) {
            found = 1;
            if (strcmp(sort_type, "asc") == 0) {
                printf("Data found. Detail of data:\n");
                bubble_sort_asc(count_line-1, i);
                display_data(10);
            }
            else if (strcmp(sort_type, "desc") == 0) {
                printf("Data found. Detail of data:\n");
                bubble_sort_desc(count_line-1, i);
                display_data(10);
            }
            else {
                printf("Wrong input to sort.\n");
            }
            break;
        }
    }
    if (!found) {
        printf("Data not found!\n");
    }
}
void export_data(char file_name[101]) { //module to export data
    char file_type[5] = ".csv";
    strcat(file_name,file_type);
    int count_line = info.count_line;
    FILE *f= fopen(file_name, "w");
    for (int i=0; i<count_line; i++) {
        fprintf(f, "%s,%s,%s,%s,%s,%s,%s,%s\n", 
            data[i][0].menu_header, data[i][1].menu_header, data[i][2].menu_header, 
            data[i][3].menu_header, data[i][4].menu_header, data[i][5].menu_header, 
            data[i][6].menu_header, data[i][7].menu_header);
   }
   printf("Data successfully written to file %s!\n", file_name);
   fclose(f);
}
int file_valid(char file_name[101]) { //module check file's name validity
    int len = strlen(file_name);
    for (int i=0; i<len; i++) {
        if (file_name[i] == '/' || file_name[i] == '\\' || file_name[i] == ':' ||
            file_name[i] == '*' || file_name[i] == '?' || file_name[i] == '"' ||
            file_name[i] == '<' || file_name[i] == '>' || file_name[i] == '|') {
                return 0;
            }
    }
    return 1;
}
int main() { //main module
    //general variables
    int num_selection;
    //case 1
    int num_rows;char temp;
    //case 2
    char search_key[51];char detailed_key[51];
    //case 3
    char col_name[51]; char sort_type[21];
    //case 4
    char file_name[101];
    read_file();
    do {
        display_out(&num_selection);
        switch (num_selection) {
            case 1 :
                while (1) {
                    printf("Number of rows: ");
                    int is_int = scanf("%d", &num_rows); while(getchar() != '\n');
                    if (is_int == 1 && num_rows > 0) {
                        break;
                    } else {
                        printf("Invalid Input. Please enter a positive integer.\n");
                    }
                }
                printf("\n");
                display_data(num_rows);
                printf("\n");
                break;
            case 2 :
                printf("Choose column: ");
                scanf("%[^\n]", search_key); getchar();
                printf("What data do you want to find?? ");
                scanf("%[^\n]", detailed_key); getchar();
                printf("\n");
                search_data(search_key, detailed_key);
                printf("\n");
                break;
            case 3 :
                printf("Choose column: ");
                scanf("%[^\n]", col_name); getchar();
                printf("Sort ascending(asc) or descending(desc)? ");
                scanf("%[^\n]", sort_type); getchar();
                printf("\n");
                sort_data(col_name, sort_type);
                printf("\n");
                break;
            case 4 :
                printf("File name: ");
                scanf("%[^\n]", file_name); getchar();
                printf("\n");
                int name_valid;
                name_valid = file_valid(file_name);
                if (name_valid) {
                    export_data(file_name);
                } else {
                    printf("Please enter the file's name correctly\n");
                    printf("DO NOT PUT / \\ * <> ? : | \" \n");
                }
                printf("\n");
                break;
            case 5 :
                printf("You have successfully exited the program!\n");
                break;
            default :
                printf("System error!\n");
                printf("Please run the program again.\n");
                break;
        }
    } while (num_selection != 5);
    return 0;
}
