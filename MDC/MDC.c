#include<stdio.h>

int mdc(int n1, int n2){
	if(n1 == 0) return n2;
	return mdc(n2 % n1, n1);
}

int main() {
  int n1, n2, r;
  scanf("%d %d", &n1, &n2);

  if (n1<n2) r = mdc(n1,n2);
  else r = mdc(n2, n1);
  
  printf("%d\n", r);
}
