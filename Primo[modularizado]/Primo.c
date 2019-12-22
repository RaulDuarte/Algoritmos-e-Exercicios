#include<stdio.h>

int primo(int n){
	if(n <= 1) return 0;
	if(n == 2) return 1;
	int div;
	for(div=2; div*div <= n; div++) if(n % div == 0) return 0;
	return 1;
}

int main() {
  int n;
  scanf("%d", &n);
  if(primo(n)) {
    printf("PRIMO\n");
  } else {
    printf("COMPOSTO\n");
  }
  return 0;
}
