#include <stdio.h>

int main() {
    long long int button, addPoints = 0, result = 0;
    scanf("%lld", &button);
    for (long long int i = 0; i < button; i++) {
        result += 100 + addPoints;
        addPoints += 50;
    }
    printf("%lld\n", result);
    return 0;
}