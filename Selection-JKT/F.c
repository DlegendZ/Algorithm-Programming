#include <stdio.h>

int main() {
    int d, s, t;
    scanf("%d %d %d", &d, &s, &t);
    if (d > s && d > t) {
        if (s > t) {
            printf("Daging\nSayur\nTelur\n");
        }
        else if (t > s) {
            printf("Daging\nTelur\nSayur\n");
        }
    }
    if (s > d && s > t) {
        if (d > t) {
            printf("Sayur\nDaging\nTelur\n");
        }
        else if (t > d) {
            printf("Sayur\nTelur\nDaging\n");
        }
    }
    if (t > d && t > s) {
        if (d > s) {
            printf("Telur\nDaging\nSayur\n");
        }
        else if (s > d) {
            printf("Telur\nSayur\nDaging\n");
        }
    }
    
    return 0;
}