#include <stdio.h>
#include <string.h>

struct plant {
	char name[41];
	char tree[41];
};

int find_tree(char name[41], int n, struct plant data[101]) {
	for (int i=0; i<n; i++) {
		if (strcmp(name, data[i].name) == 0) {
			return i;
		}
	}
	return -1;
}

int main() {
	int n;
	struct plant data[101];	
	FILE *f = fopen("testdata.in", "r");
	fscanf(f, "%d\n", &n);
	
	for (int i=0; i<n; i++) {
		fscanf(f, "%[^#]#%[^\n]\n", data[i].name, data[i].tree);
	}
	
	int t;
	char name[41];
	fscanf(f, "%d\n", &t);
	
	for (int j=0; j<t; j++) {
		fscanf(f, "%[^\n]\n", name);
		int stats = find_tree(name, n, data);
		if (stats != -1) {
			printf("Case #%d: %s\n", j+1, data[stats].tree);
		} else {
			printf("Case #%d: N/A\n", j+1);
		}
	}
	
	fclose(f);
	return 0;
}
