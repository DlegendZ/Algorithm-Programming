#include <stdio.h>

int main() {
    char words[101];
    scanf("%[^\n]", &words); getchar();
    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%%s\\n\",\"%s\");\n", words);
    printf("    return 0;\n");
    printf("}\n");
    return 0;
}