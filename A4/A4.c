#include <stdio.h>

int produto(int indice, int valor){

    int temp;
    
    if(indice == 1){
        return valor;
    }else
    {
        scanf("%d", &temp);
        return valor * produto(indice-1, temp);
    }
}


int main(){

    int numEntrada, indice, resultado, valor;

    scanf("%d", &numEntrada);

    resultado = 0;
    if(numEntrada > 0){
        scanf("%d", &valor);
        resultado = produto(numEntrada, valor);
    }

    printf("%d\n", resultado);
    
    return 0;
}