Emergency Exit
#include <stdio.h>

int main() {

  int t, n, k, i, j, z, isAlive;

  scanf("%d", &t);

  for ( i = 0; i < t; i++){
    scanf("%d %d", &n, &k) ;   

    char s[n+1];
    scanf("%s", s);

    for ( j = 0; j < n; j++){
      if(s[j] == '1') break;
    }

    for ( z = n - 1; z >= 0; z--){
      if(s[z] == '1') break;
    }

    // printf("J:%d Z:%d\n", j, n-z-1);
    if(k >= n) isAlive = 1;
    else if((j+n-z) == n) isAlive = (k >= n);
    else if(j < k && (n - z - 1) < k) isAlive = 1;
    else isAlive = 0;
    
    isAlive ? printf("Case #%d: Alive\n", i+1) : printf("Case #%d: Dead\n", i+1);
  }
  

  return 0;
}
