#include <stdio.h>

int main() {
    int n, m, i, j, attack, max_attack = 0, weapon, max_weapon = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        //loop bibi's weapons
        scanf("%d", &weapon); getchar();
        if (max_weapon < weapon) {
            max_weapon = weapon; //update the max value
        }
    }

    for (j = 0; j < m; j++) {
        scanf("%d", &attack); getchar();
        if (max_attack < attack) {
            max_attack = attack; //update the max attack
        }
    }

    if (max_weapon > max_attack) {
        printf("The dark secret was true\n");
    }
    else {
        printf("Secret debunked\n");
    }

    return 0;
}