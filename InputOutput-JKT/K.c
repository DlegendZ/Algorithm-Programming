#include <stdio.h>

int main() {
    char name[101], nis[9];
    long long int age;
    scanf("%[^\n]", &name); getchar();
    scanf("%s %d", &nis, &age); getchar();
    printf("Name: %s\nNIS: %s\nAge: %d\n", name, nis, age);
    return 0;
}

