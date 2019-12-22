#include<stdio.h>

int soma_divisores(int n){
	int ans = 0;
	int i;
	for(i=1; i < n; i++) if(n % i == 0) ans += i;
	return ans;
}

int main() {
  int n;
  scanf("%d", &n);
  if(soma_divisores(n) == n) {
    printf("SIM\n");
  } else {
    printf("NAO\n");
  }
  return 0;
}
