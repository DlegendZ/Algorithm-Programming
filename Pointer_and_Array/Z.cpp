#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for (int i=0; i<t; i++) {
		int n, k;
		
		scanf("%d %d", &n, &k);
		
		char hallway[n+1];
		
		scanf("%s", hallway);
		
		
		int breath = k;
		int stairs_one;
		int stairs_two;
		int is_alive;
		
		for (int LS=0; LS<n; LS++) {
			if (hallway[LS] == '1') {
				stairs_one = LS;
				break;
			}
		}
		
		for (int RS=n-1; RS>=0; RS--) {
			if (hallway[RS] == '1') {
				stairs_two = RS;
				break;
			}
		}

		if(breath >= n) is_alive = 1;
    	else if((stairs_one+n-stairs_two) == n) is_alive = (breath >= n);
    	else if(stairs_one < breath && (n - stairs_two - 1) < breath) is_alive = 1;
    	else is_alive = 0;
		
		is_alive ? printf("Case #%d: Alive\n", i+1) : printf("Case #%d: Dead\n", i+1);
	}
	return 0;
}
