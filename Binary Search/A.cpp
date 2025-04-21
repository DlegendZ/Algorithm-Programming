#include <stdio.h>

void binarysearch(int max, int n_num[], int key) {
    int left = 0;
    int right = max-1;
    int result = -1;

    while (left <= right) {
        int middle = (left + right)/2;

        if (n_num[middle] == key) {
            result = middle + 1;
            right = middle - 1;
        }
        else if (n_num[middle] > key) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }

    printf("%d\n", result);
}

int main() {
    int n, m;

    scanf("%d %d", &n, &m); getchar();

    int n_num[n];
    int m_num[m];

    for (int i=0; i<n; i++) {
        scanf("%d", &n_num[i]); getchar();
    }

    for (int i=0; i<m; i++) {
        scanf("%d", &m_num[i]); getchar();

        binarysearch(n, n_num, m_num[i]);
    }

    return 0;
}