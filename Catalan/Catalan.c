#include<stdio.h>


int catalan(int n){
	if(n == 0) return 1;
	return ((4*n - 2) * catalan(n-1))/(n+1);
}



int main(){
	int n;
	while(1){
		scanf("%d", &n);
		if(n == -1) break;
		printf("%d\n", catalan(n));
	}
}
