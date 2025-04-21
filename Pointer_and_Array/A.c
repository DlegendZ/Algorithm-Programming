#include <stdio.h>
#include <math.h>

int main() {
    int total_day, total_friend, i, turn = 0, j;
    scanf("%d", &total_day);
    int view_on_day[total_day];
    for (i = 0; i < total_day; i++) {
        scanf("%d", &view_on_day[i]);
    }
    scanf("%d", &total_friend);
    int friend[total_friend], from_day[total_friend], until_day[total_friend], result[total_friend];
    for (i = 0; i < total_friend; i++) {
        scanf("%d %d", &from_day[i], &until_day[i]);
        result[i] = 0;
        for (j = from_day[i]; j <= until_day[i]; j++) {
            result[i] += view_on_day[j-1];
        }
    }
    for (i = 0; i < total_friend; i++) {
        turn += 1;
        printf("Case #%d: %d\n", turn, result[i]);
    }
    return 0;
}