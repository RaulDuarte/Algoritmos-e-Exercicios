#include<stdio.h>

int main() {
  int t1, t2, t3;
  int posicoes[3] = {3, 3, 3};
  
  scanf("%d %d %d", &t1, &t2, &t3);

	if(t1 < t2) posicoes[0]--;
	if(t1 < t3) posicoes[0]--;
	if(t2 < t1) posicoes[1]--;
	if(t2 < t3) posicoes[1]--;
	if(t3 < t1) posicoes[2]--;
	if(t3 < t2) posicoes[2]--;

	int p, i;
	
	for(p=1; p <= 3; p++){
		for(i=0; i < 3; i++) if(posicoes[i] == p) 
		printf("%d\n", i+1);
	}
	
  	return 0;
}
