#include <stdio.h>
#include <stdlib.h>

int maximo(int a,int b){
  if(a>=b){
    return a;
  }
  else {
    return b;
  }
}

int f(int *v,int n){
  if (n==0){
    return 0;
  }
  else if(n==1){
    return maximo(0,v[0]);
  }
  return v[n-1]+maximo(f(v,n-1),f(v,n-2));
}

int main(void) {
  int n,i;
  scanf("%d",&n);
  int *v;
  v=malloc(sizeof(int)*n);

  for(i=0;i<n;i++){
    scanf("%d",&v[i]);
  }

  for(i=0;i<=n;i++){
    printf("F(%d) = %d\n",i,f(v,i));
  }

  return 0;
}

