#include<stdio.h>


int main(){
	int n, i, j, k;
	scanf("%d", &n);
	int M1[n][n];
	int M2[n][n];
	int M_ans[n][n];
	
	for(i=0; i < n; i++) for(j=0; j < n; j++) scanf("%d", &M1[i][j]);
	for(i=0; i < n; i++) for(j=0; j < n; j++) scanf("%d", &M2[i][j]);
	
	for(i=0; i < n; i++){
		for(j=0; j < n; j++){
			int sum = 0;
			for(k=0; k < n; k++) sum += M1[i][k] * M2[k][j];
			M_ans[i][j] = sum;
		}
	}

	for(i=0; i < n; i++){
		for(j=0; j < n; j++){
			if(j < n-1) printf("%d ", M_ans[i][j]);
			else printf("%d\n", M_ans[i][j]);
		}
	}
}
