#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    // Loop over each test case
    for (int t = 1; t <= T; t++) {
        int N;  // Number of ingredients
        scanf("%d", &N);
        
        int A[N], B[N];  // Arrays for required amounts and current amounts
        
        // Read the required amount of each ingredient
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        // Read the amount Jojo currently has for each ingredient
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }
        
        // Output the result for this test case
        printf("Case #%d:", t);
        
        // Calculate how much Jojo needs to buy or will have left for each ingredient
        for (int i = 0; i < N; i++) {
            int result = A[i] - B[i];
            if (result > 0) {
                // Jojo needs to buy more of this ingredient
                printf(" %d", result);
            } else {
                // Jojo has excess of this ingredient
                printf(" %d", result);
            }
        }
        
        // Move to the next line for the next case
        printf("\n");
    }
    
    return 0;
}
