#include <stdio.h>

int main() {
    int physical, magical, pure;
    scanf("%d %d %d", &physical, &magical, &pure);
    float result = (0.2*physical) + (0.3*magical) + (0.5*pure);
    printf("%.2f\n", result);
    return 0;
}