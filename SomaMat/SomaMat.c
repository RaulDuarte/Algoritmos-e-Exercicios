#include <stdio.h>

int main() {

    int tamanhoMat, linhaMatriz, colunaMatriz, valor;
    int matriz1[10][10];
    int matriz2[10][10];

    scanf("%d", &tamanhoMat);

    for (linhaMatriz = 0; linhaMatriz < tamanhoMat; linhaMatriz++)
    {
        for (colunaMatriz = 0; colunaMatriz < tamanhoMat; colunaMatriz++)
        {
            scanf("%d", &matriz1[linhaMatriz][colunaMatriz]);
        }
    }

    for (linhaMatriz = 0; linhaMatriz < tamanhoMat; linhaMatriz++)
    {
        for (colunaMatriz = 0; colunaMatriz < tamanhoMat; colunaMatriz++)
        {
            scanf("%d", &matriz2[linhaMatriz][colunaMatriz]);
        }
    }
    
    for (linhaMatriz = 0; linhaMatriz < tamanhoMat; linhaMatriz++)
    {
        for (colunaMatriz = 0; colunaMatriz < tamanhoMat; colunaMatriz++)
        {
            valor = matriz1[linhaMatriz][colunaMatriz]+matriz2[linhaMatriz][colunaMatriz];
            if(colunaMatriz < tamanhoMat-1){
                printf("%d ", valor);
            }else{
                printf("%d", valor);
            }
            
        }
        printf("\n");
    }
    return 0;
}