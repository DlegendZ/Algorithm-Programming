#include <stdio.h>

int main() {
    long long int t, i, n, x, flips, j;
    scanf("%lld", &t); getchar(); //scanf the testcases
    for (i = 1; i <= t; i++) {
        scanf("%lld %lld", &n, &x); getchar();
        long long int min_flips;
        for (j = 1; j <= 2; j++) {
            //checking sides with smaller amount of flips
            if (j == 1) {
                //check from the front side
                flips = x/2;
                min_flips = flips;
            }
            else if (j == 2) {
                //check from the back side
                if (n % 2 == 0) {
                    flips = (n-x+1)/2;
                }
                else {
                    flips = ((n-x))/2;
                }
                
                // if (n % 2 != 0 && flips == 1 && x != (n+1)/2) {
                //     flips = 0;
                // }
                if (min_flips > flips) {
                    min_flips = flips;
                }
            } 
        }
        printf("Case #%d: %d\n", i, min_flips);
    }
    return 0;
}
