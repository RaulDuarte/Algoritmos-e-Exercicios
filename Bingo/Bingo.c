#include<stdio.h>

int abs(int a){
	if(a < 0) return a *(-1);
	return a;
}

int check(int balls[], int b, int n){
	int i, j, k;
	for(i=0; i <= n; i++){
		int flag = 0;
		for(j=0; j < b; j++) for(k=0; k < b; k++) if(abs(balls[j]-balls[k]) == i) flag = 1;
		if(!flag) return 0;
	}
	return 1;
}

int main(){
	
	while(1){
		int n, b, i;
		scanf("%d %d", &n, &b);
		if(n == 0 && b == 0) break;
		int balls[b];
		for(i=0; i < b; i++) scanf("%d", &balls[i]);;
		
		if(check(balls, b, n)) printf("Y\n");
		else printf("N\n");
	}
}
