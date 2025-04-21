#include <stdio.h>

int main() {
    int t, i, j, n, k, h;
    scanf("%d", &t); getchar();//scanf testcase
    for (i = 1; i <= t; i++) {
        //loop t times
        scanf("%d", &n); getchar(); //scanf n times
        int a[n], on = 0, off = 0, binary;
        for (j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        //loop to check
        for (h = 0; h < (n-1); h++) {
            //from index 0 until index 3
            for (k = (h+1); k < n; k++) {
                //from index j+1 until index 4
                binary = a[h]^a[k];
                int one = 0;
                while (binary / 2 != 0 || binary == 1) {
                    if (binary % 2 == 1) {
                        one += 1;
                    }
                    binary = binary / 2;
                } 
                if (one >= 3) {
                    on += 1;
                }
                else {
                    off += 1;
                }
            }
        }
        printf("Case #%d: %d %d\n", i, on, off);
    }
    return 0;
}

// 7 / 2 = 3 and 1
// 3 / 2 = 1 and 1
// 1 / 2 = 0 and 1