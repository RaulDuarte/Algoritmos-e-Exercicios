#include<stdio.h>

int max(int x, int y){
	if(x == y) return x;
	else if(x > y) return x;
	else return y;
}

int solve(int M[200][200], int n){
	int i, j, max_sum = (-10) * n;
	for(i=0; i < n-2; i++){
		for(j=0; j < n-2; j++){
			int local_sum = 0;
			local_sum += M[i][j] + M[i][j+1]+M[i][j+2];
			local_sum += M[i+1][j+1];
			local_sum += M[i+2][j] + M[i+2][j+1]+M[i+2][j+2];
			max_sum = max(max_sum, local_sum);
		}
	}
	return max_sum;
}

int main(){
	int matrix[200][200];
	int i, j, n;
	scanf("%d", &n);
	for(i=0; i < n; i++) for(j=0; j < n; j++) scanf("%d", &matrix[i][j]);
	
	printf("%d\n", solve(matrix, n));
}
