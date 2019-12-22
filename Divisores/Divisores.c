#include <stdio.h>

int div(int n){
	int d = 2;
	int ans = 0;
	while(n >= d){
		if(n % d == 0) ans++;
		d += 2;
	}
	return ans;
}

int main () {
  int n;
  scanf("%d", &n);
  printf("%d\n", div(n));
  return 0;
}

