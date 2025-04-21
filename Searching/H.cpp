#include <stdio.h>

void bubble_sort_asc(long long int levels, long long int power_levels[]) {
    for (int i=0; i<levels-1; i++) {
        for (int j=0; j<levels-1-i; j++) {
            if (power_levels[j] > power_levels[j+1]) {
                long long int temp = power_levels[j];
                power_levels[j] = power_levels[j+1];
                power_levels[j+1] = temp;
            }
        }
    }
}

int main() {
    long long int levels;
    scanf("%lld", &levels); getchar();

    long long int power_levels[levels];

    for (int i=0; i<levels; i++) {
        scanf("%lld", &power_levels[i]); getchar();
    }

    long long int my_power;
    scanf("%lld", &my_power);

    bubble_sort_asc(levels, power_levels);

    long long int level_solved = 0;

    for (int i=0; i<levels; i++) {
        if ((my_power - power_levels[i]) >= 0) {
            my_power -= power_levels[i];
            level_solved++;
        }
    }

    printf("%lld\n", level_solved);
    return 0;
}