#include<stdio.h>


int main(){
	const int N = 1e4;
	int c=0, i, j;
	int bag[N];
	for(i=0; i < N; i++) bag[i] = 0;
	
	int n;
	
	scanf("%d", &n);
	int M[n][n];

	for(i=0; i < n; i++) for(j=0; j < n; j++) scanf("%d", &M[i][j]);

	for(i=0; i < 2*n; i++){
		int ii, jj;
		scanf("%d %d", &ii, &jj);
		bag[M[ii-1][jj-1]]++;	
	}
	
	for(i=0; i < N; i++) if(bag[i] >= 1) c++;

	printf("%d\n", c);
}
