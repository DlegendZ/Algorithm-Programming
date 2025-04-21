#include <stdio.h>

int main() {
    int assignment, finalScore, midScore;
    scanf("%d %d %d", &assignment, &midScore, &finalScore);
    float result = (0.2*assignment) + (0.3*midScore) + (0.5*finalScore);
    printf("%.2f\n", result);
    return 0;
}