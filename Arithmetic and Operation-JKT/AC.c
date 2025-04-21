#include <stdio.h>
#include <math.h>

int main() {
    double team, result;
    scanf("%lf", &team);
    result = pow(2, team) - 1.0;
    printf("%.0lf\n", result);
    return 0;
}