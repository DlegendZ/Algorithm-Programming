#include <stdio.h>

int main() {
    char id[11], name[101], class;
    long long int classnum;
    scanf("%s", &id); getchar();
    scanf("%[^\n]", &name); getchar();
    scanf("%c %lld", &class, &classnum); getchar();
    printf("Id    : %s\nName  : %s\nClass : %c\nNum   : %lld\n", id, name, class, classnum);
    return 0;
}