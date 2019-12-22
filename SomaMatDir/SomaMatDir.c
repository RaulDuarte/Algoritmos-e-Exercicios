#include <stdio.h>

int main() {

    int tamanhoMat, linhaMatriz, colunaMatriz, valor, tamMatriz3;
    int matriz1[10][10];
    int matriz2[10][10];
    int matriz3[10][10];

    scanf("%d", &tamanhoMat);

    tamMatriz3 = tamanhoMat+tamanhoMat;

    for (linhaMatriz = 0; linhaMatriz < tamMatriz3; linhaMatriz++)
    {
        for (colunaMatriz = 0; colunaMatriz < tamMatriz3; colunaMatriz++)
        {
           matriz3[linhaMatriz][colunaMatriz] = 0;
        }
    }

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
            matriz3[linhaMatriz][colunaMatriz] = matriz1[linhaMatriz][colunaMatriz];
        }
    }

    for (linhaMatriz = tamanhoMat; linhaMatriz < tamMatriz3; linhaMatriz++)
    {
        for (colunaMatriz = tamanhoMat; colunaMatriz < tamMatriz3; colunaMatriz++)
        {
            matriz3[linhaMatriz][colunaMatriz] = matriz2[linhaMatriz-tamanhoMat][colunaMatriz-tamanhoMat];
        }
    }

    for (linhaMatriz = 0; linhaMatriz < tamMatriz3; linhaMatriz++)
    {
        for (colunaMatriz = 0; colunaMatriz < tamMatriz3; colunaMatriz++)
        {
            if(colunaMatriz < tamMatriz3-1){
                printf("%d ", matriz3[linhaMatriz][colunaMatriz]);
            }else{
                printf("%d", matriz3[linhaMatriz][colunaMatriz]);
            }
            
        }
        printf("\n");
    }
    return 0;
}