#include <stdio.h>

int main() {
    int N, Q;

    // Read the number of items
    scanf("%d", &N);
    
    int prices[N];  // Array to store the initial prices
    
    // Read the initial prices of the items
    for (int i = 0; i < N; i++) {
        scanf("%d", &prices[i]);
    }
    
    // Read the number of updates
    scanf("%d", &Q);

    // Process each price update
    for (int t = 1; t <= Q; t++) {
        int Ai, Bi;
        
        // Read the item index (Ai) and new price (Bi)
        scanf("%d %d", &Ai, &Bi);
        
        // Update the price of the Ai-th item (Ai is 1-based, convert to 0-based)
        prices[Ai - 1] = Bi;
        
        // Output the updated prices in the required format
        printf("Case #%d:", t);
        for (int i = 0; i < N; i++) {
            printf(" %d", prices[i]);
        }
        printf("\n");
    }
    
    return 0;
}
