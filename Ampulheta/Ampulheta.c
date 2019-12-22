#include<stdio.h>

int max(int x, int y){
	if(x == y) return x;
	else if(x > y) return x;
	else return y;
}

int solve(int M[6][6]){
	int i, j, max_sum=-99999;
	for(i=0; i < 4; i++){
		for(j=0; j < 4; j++){
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
	int matrix[6][6];
	int i, j;
	for(i=0; i < 6; i++) for(j=0; j < 6; j++) scanf("%d", &matrix[i][j]);
	
	printf("%d\n", solve(matrix));
}
