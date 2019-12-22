#include<stdio.h>


int mdc(int n1, int n2){
	if(n1 == 0) return n2;
	return mdc(n2 % n1 , n1);
}

int mmc(int n1, int n2){
	return (n1 * n2) / mdc(n1, n2);
}
int main() {
  int n1, n2, r;
  scanf("%d %d", &n1, &n2);

  if (n1<n2) r = mmc(n1,n2);
  else r = mmc(n2, n1);
  
  printf("%d\n", r);
}


