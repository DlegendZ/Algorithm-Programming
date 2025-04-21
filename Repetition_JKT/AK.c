#include <stdio.h>

int main() {
    int i, n, current_num, prev_num = 1, set = 0;
    scanf("%d", &n); getchar(); //scanf the n how many steps
    int total[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &current_num); getchar();
        if (i > 0) {
            if (prev_num >= current_num) {
                total[set] = prev_num; //save the prev num
                set += 1;
                total[set] = 0;
                prev_num = current_num; //update the prev num to be current num
                if (i == (n-1)) {
                    //we have to safe it because this is the last run
                    total[set] = current_num;
                }
            }
            else {
                //if not 1 1 or 5 1
                if (i == (n-1)) {
                    //we have to safe it because this is the last run
                    total[set] = current_num;
                }
                else {
                    prev_num = current_num; //update the prev num to be the current num
                }
                
            }
        }
        
    }

    if (total[set] == 0) {
        set -= 1;
    }

    for (i = 0; i <= set; i++) {
        if (i == set) {
            printf("%d\n", total[i]);
        }
        else {
            printf("%d ", total[i]);
        }
    }
    return 0;
}