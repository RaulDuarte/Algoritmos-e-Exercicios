#include <stdio.h>

int main() {

    int tamanhoMat, linhaMatriz, colunaMatriz, valor;
    int matriz1[10][10];

    valor = 0;

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
        for (colunaMatriz = 0; colunaMatriz < linhaMatriz; colunaMatriz++)
        {
            valor = valor + matriz1[linhaMatriz][colunaMatriz];  
        }
    }

    printf("%d\n", valor);

    return 0;
}