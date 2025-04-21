#include <stdio.h>

int main() {
	int t, i;
	scanf("%d", &t);
	
	for (i=0; i<t; i++) {
		int n, k;
		
		scanf("%d %d", &n, &k);
		
		char hallway[n+1];
		
		scanf("%s", hallway);
		
		
		int breath = k;
		int is_alive;
		int LS;
		int RS;
		
		for (LS=0; LS<n; LS++) {
			if (hallway[LS] == '1') {
				break;
			}
		}
		
		for (RS=n-1; RS>=0; RS--) {
			if (hallway[RS] == '1') {
				break;
			}
		}

		if(breath >= n) is_alive = 1;
    	else if((LS+n-RS) == n) is_alive = 0 ;
    	else if(LS < breath && (n - RS - 1) < breath) is_alive = 1;
    	else is_alive = 0;
		
		is_alive ? printf("Case #%d: Alive\n", i+1) : printf("Case #%d: Dead\n", i+1);
	}
	return 0;
}
