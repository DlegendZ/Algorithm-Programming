#include <stdio.h>

int main() {
	int a,b;
	
	FILE *f = fopen("testdata.in", "r");
	
	fscanf(f, "%d %d\n", &a, &b); 
	
	fclose(f);
	
	int result = a+b;
	
	printf("%d\n", result);
	return 0;
}
