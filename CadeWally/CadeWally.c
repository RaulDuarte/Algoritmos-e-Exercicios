#include<stdio.h>


int main(){
	int n, m, i, j;
	scanf("%d", &n);
	scanf("%d", &m);
	int M[n+2][m+2];
	for(i=1; i <= n; i++) for(j=1; j <= m; j++) scanf("%d", &M[i][j]);
	
	for(i=0; i < n+2; i++){
		M[i][0] = M[i][m];
		M[i][m+1] = M[i][1];
	}

	for(j=0; j < m+2; j++){
		M[0][j] = M[n][j];
		M[n+1][j] = M[1][j];
	}

	int ii, jj;
	int flag = 0;

	for(i=1; i <= n; i++){
		for(j=1; j <= m; j++){
			if(M[i][j]==1111 && M[i][j-1]==0 && M[i][j+1]==0 && M[i+1][j]==8 && M[i-1][j] ==4){
					ii = i-1;
					jj = j-1;
					flag = 1;
					break;
			}
		}
	}

	if(flag) printf("%d %d\n", ii, jj);
	else printf("WALLY NAO ESTA NA MATRIZ\n");
}
