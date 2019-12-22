#include <stdio.h>

int inverso(int n, int inv){
  if (n==0){
    return inv;
  }
  inv=inv*10+n%10;
  n=(n-n%10)/10;
  return inverso(n,inv);
}

int soma(int n,int cont){
  if (cont==0){
    return -1;
  }
  
  if (n+inverso(n,0)==inverso(n+inverso(n,0),0)){
    return n+inverso(n,0);
  }

  return soma(n+inverso(n,0),cont-1);
}

int main(void) {
  int n;
  scanf("%d",&n);

  printf("%d\n",soma(n,10));

  return 0;
}

