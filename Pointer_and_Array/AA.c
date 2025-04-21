#include <stdio.h>
#include <math.h>

int main() {
    int i, customer;
    scanf("%d", &customer);
    int room_req[customer], happy_customer = 0, max_room = 0;
    for (i = 0; i < customer; i++) {
        scanf("%d", &room_req[i]);
        if (max_room < room_req[i]) {
            max_room = room_req[i];
        }
    }
    int room[max_room] = 0;
    for (i = 0; i < customer; i++){
        if (room[room_req[i]] == 0) {
            happy_customer += 1;
            room[room_req[i]] = 1;
        }
    }
    printf("%d\n", happy_customer);
    return 0;
}
