#include <stdio.h>

void search(int friend_res[], int t) {
    int found = 0;
    for (int i=0; i<t; i++) {
        if (friend_res[i] == 1) {
            found++;
            printf("not easy\n");
            break;
        }
    }
    
    if (!found) {
        printf("easy\n");
    }
}

int main() {
    int t;
    scanf("%d", &t); getchar();

    int friend_res[t];

    for (int i=0; i<t; i++) {
        scanf("%d", &friend_res[i]); getchar();
    }

    search(friend_res, t);
    return 0;
}