#include <stdio.h>

int main() {

    int numElementos, indice1, indice2, valorComparado;
    int vetor[1000];

    scanf("%d", &numElementos);

    for (indice1 = 0; indice1 < numElementos; indice1++)
    {
        scanf("%d", &vetor[indice1]);
    }

    scanf("%d", &valorComparado);

    for(indice1 = 0; indice1 < numElementos-1; indice1++){
        for (indice2 = indice1+1; indice2 < numElementos; indice2++)
        {
            if(vetor[indice1]+vetor[indice2] == valorComparado){
                printf("SIM\n");
                return 0;
            }
        }
    }

    printf("NAO\n");

    return 0;
}