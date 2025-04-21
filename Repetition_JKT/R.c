#include <stdio.h>

int main() {
    long long int i, t, j, n, current_height, prev_height, min_height_difference, height_difference;
    scanf("%lld", &t); getchar(); //scanf the testcases
    for (i = 1; i <= t; i++) {
        scanf("%lld", &n); getchar();
        for (j = 1; j <= n; j++) {
            scanf("%lld", &current_height); getchar();
            //check for the first run
            if (j == 1) {
                prev_height = current_height;
                min_height_difference = 2000000000;
            }
            else {
                //check for the bigger value to avoid negative num
                if (prev_height >= current_height) {
                    height_difference = prev_height - current_height;
                }
                else if (current_height >= prev_height) {
                    height_difference = current_height - prev_height;
                }
                //compare min_height_difference with height_difference
                if (min_height_difference > height_difference) {
                    min_height_difference = height_difference;
                }
                //Update prev_height to be current_height
                prev_height = current_height;
            }   
           
            
        }
        printf("Case #%lld: %lld\n", i, min_height_difference);
    }
    return 0;
}