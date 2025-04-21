#include <stdio.h>

void bubble_sort_asc(int mmr[], int player_num) {
    for (int i=0; i<player_num-1; i++) {
        for (int j=0; j<player_num-1-i; j++) {
            if (mmr[j] > mmr[j+1]) {
                int temp = mmr[j];
                mmr[j] = mmr[j+1];
                mmr[j+1] = temp;
            }
        }
    }
}

void search(int f, int mmr[], int player_num) {
    int party_player;
    int found = 0;
    for (int i=0; i<player_num; i++) {
        if (f == mmr[i]) {
            found++;
            if (i != player_num-1) {
                party_player = mmr[i+1];
                printf("%d %d\n", f, party_player);
            } else {
                party_player = mmr[i-1];
                printf("%d %d\n", party_player, f);
            }
            break;
        }
    }

    if (!found) {
        printf("-1 -1\n");
    }
}

int main() {
    int t;
    scanf("%d", &t); getchar();

    for (int i=0; i<t; i++) {
        int player_num;
        scanf("%d", &player_num); getchar();

        int mmr[player_num];

        for (int j=0; j<player_num; j++) {
            scanf("%d", &mmr[j]); getchar();
        }

        int f;
        scanf("%d", &f); getchar();

        bubble_sort_asc(mmr, player_num);

        printf("CASE #%d: ", i+1);
        
        search(f, mmr, player_num);
    }
    return 0;
}