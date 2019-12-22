#include<stdio.h>
#include<limits.h>

int min(int x, int y){
	if(x == y) return x;
	else if(x > y) return y;
	else return x;
}

int main(){
	int x;
	int ans = INT_MAX;
	int flag = 0;
	while(1){
		scanf("%d", &x);
		if(x < 0) break;
		flag = 1;
		ans = min(x, ans);
	}
	if(flag) printf("%d\n", ans);
	else printf("nenhum numero informado\n");
}
