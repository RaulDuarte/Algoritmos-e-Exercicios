#include <stdio.h>

int main() {

    int numLinhas, numColunas, indiceLinha, indiceColuna;
    int matriz[50][50];

    scanf("%d", &numLinhas);
    scanf("%d", &numColunas);

    

    for (indiceLinha = 0; indiceLinha < numLinhas; indiceLinha++)
    {
        for (indiceColuna = 0; indiceColuna < numColunas; indiceColuna++)
        {
            scanf("%d", &matriz[indiceLinha][indiceColuna]);
        }
    }

    for (indiceColuna = 0; indiceColuna < numColunas; indiceColuna++)
    {
        for (indiceLinha = 0; indiceLinha < numLinhas; indiceLinha++)
        {
            if(indiceLinha < numLinhas-1){
                printf("%d ", matriz[indiceLinha][indiceColuna]);
            }else{
                printf("%d", matriz[indiceLinha][indiceColuna]);
            }
        }
        printf("\n");
    }    
    printf("\n");
    return 0;
}