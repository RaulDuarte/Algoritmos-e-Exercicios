#include <stdio.h>

int main() {

    int tamanhoMat, linhaMatriz, colunaMatriz, valor, temp;
    int matriz1[100][100];
    int matrizH[100][100];


    scanf("%d", &tamanhoMat);

    for (linhaMatriz = 0; linhaMatriz < tamanhoMat; linhaMatriz++)
    {
        for (colunaMatriz = 0; colunaMatriz < tamanhoMat; colunaMatriz++)
        {
            scanf("%d", &matriz1[linhaMatriz][colunaMatriz]);
        }
    }

    temp = 0;

    while(temp < tamanhoMat){

        scanf("%d", &valor);

        for (colunaMatriz = 0; colunaMatriz < tamanhoMat; colunaMatriz++)
        {
            matrizH[temp][colunaMatriz] = matriz1[valor-1][colunaMatriz];
        }
        
        temp = temp + 1;
    }

    for (linhaMatriz = 0; linhaMatriz < tamanhoMat; linhaMatriz++)
    {
        for (colunaMatriz = 0; colunaMatriz < tamanhoMat; colunaMatriz++)
        {
            if(colunaMatriz == tamanhoMat-1){
                printf("%d", matrizH[linhaMatriz][colunaMatriz]);
            }else{
                printf("%d ", matrizH[linhaMatriz][colunaMatriz]);
            }
        }
        printf("\n");
    }


    
    
    return 0;
}