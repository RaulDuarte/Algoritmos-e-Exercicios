#include <stdio.h>

int duasnotas(int preco, int valor){
  
  

  

  

  return 0;
}

int main(void) {
	int compra, valor, look;
	int troco,V[6]={2,5,10,20,50,100},i,j;

	

	while (scanf("%d %d",&compra, &valor)){
		if (compra==0 && valor==0){
			break;
		}

		troco=valor-compra;
		look = 0;
		
		for (i=0;i<6;i++){
			for(j=i;j<6;j++){
				if (troco==V[i]+V[j]){
					printf("possible\n");
					look = 1;
				}
			}
		}

		if(look == 0){
			printf("impossible\n");
		}
  }
  
  return 0;
}


