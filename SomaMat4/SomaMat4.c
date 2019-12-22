#include <stdio.h>

int main() {

    int tamanhoMat, linhaMatriz, colunaMatriz, valor, loop;
    int matriz1[10][10];

    valor = 0;
    loop = 0;

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
        for (colunaMatriz = 0; colunaMatriz < (tamanhoMat-1)-loop; colunaMatriz++)
        {
            valor = valor + matriz1[linhaMatriz][colunaMatriz];  
        }
        loop++;
    }

    printf("%d\n", valor);

    return 0;
}