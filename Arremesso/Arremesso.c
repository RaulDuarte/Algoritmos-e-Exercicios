#include <stdio.h>

int checa (int n, int v);
 
int main () {
  int n, v, i, possivel;

  while(1) {
    scanf("%d %d", &n, &v);
    if(n==0) break;

    possivel = 0;
    for (i=1; i<=v; i++) {
      if(checa(n,i)) {
	      printf("possivel\n");
	      possivel = 1;
	      break;
      }
    }
    if(!possivel) printf("impossivel\n");
  }
  return 0;
}

int checa (int n, int v){
int posfinal=0, i,j=v;
  
  for(i=v;i>0;i--){
    for(j=i;j>0;j--){
      posfinal=posfinal+i;
      if(posfinal==n){
        return 1;
      }
    }
  }
  return 0;
}