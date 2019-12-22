#include<stdio.h>

int main(){
	int n, c, m, i, q=0;
	const int N = 1e5;
	int compradas[N];
	for(i=0; i < N; i++) compradas[i] = 0;

	scanf("%d %d %d", &n, &c, &m);
	int carimbadas[n];
	
	for(i=0; i < c; i++) scanf("%d", &carimbadas[i]);

	for(i=0; i < m; i++){	
		int x;
		scanf("%d", &x);
		compradas[x]++;
	}
	
	for(i=0; i < c; i++) if(compradas[carimbadas[i]] == 0) q++;

	printf("%d\n", q);
}
