#include "stdio.h"


float serie(int n){
	float temp;
	if(n <= 0){
		scanf("%f", &temp);
		return temp;
	}else{
		scanf("%f", &temp);
		return temp+(1/serie(n-1));
	}
}

int main(){
	
	int n;
	
	scanf("%d", &n);
	
	printf("%0.2f", serie(n));
	
	return 0;
}