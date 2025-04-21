#include <stdio.h>

void search(long long int banana_weight[], long long int weight, long long int banana_num) {
    long long int found = 0;
    for (int i=0; i<banana_num; i++) {
        if (weight <= banana_weight[i]) {
            found++;
        }
    }

    printf("%lld\n", found);
}

int main() {
    long long int t;
    scanf("%lld", &t); getchar();

    for (int i=0; i<t; i++) {
        long long int banana_num;
        long long int weight;

        scanf("%lld %lld", &banana_num, &weight); getchar();

        long long int banana_weight[banana_num];

        for (int j=0; j<banana_num; j++) {
            scanf("%lld", &banana_weight[j]);
        }

        printf("Case #%lld: ", i+1);

        search(banana_weight, weight, banana_num);
    }
    return 0;
}