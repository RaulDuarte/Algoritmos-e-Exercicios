#include <stdio.h>
#include <stdlib.h>

void valida(int *x,int *y){
  int t;
  if(*x<=*y){
    return;
  }
  else if (*x>*y){
    t=*x;
    *x=*y;
    *y=t;
  }
}

int *constroi(int n,int m){
  int i;

  int *v;
  v=malloc(sizeof(int)*m);
  for(i=0;i<m-n+1;i++){
    v[i]=n+i;
  }
  return v;
}

int main(void) {
  int n,m;
  int *x=&n,*y=&m;
  
  scanf("%d %d",&n,&m);

  valida(&n,&m);
  
  int i;

  for(i=0;i<m-n+1;i++){
    printf("%d\n",constroi(n,m)[i]);
  }

  return 0;
}

