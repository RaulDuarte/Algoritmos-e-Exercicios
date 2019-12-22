#include <stdio.h>




int main() {

    int numEntrada, valorComparado, indice, numMaiores;
    int vetor[1000];
    
    scanf("%d", &numEntrada);

    for (indice = 0; indice < numEntrada; indice++)
    {
        scanf("%d", &vetor[indice]);
    }

    numMaiores = 0;
    scanf("%d", &valorComparado);

    for (indice = 0; indice < numEntrada; indice++)
    {
        if(vetor[indice] > valorComparado){
                numMaiores++;
        }
    }
    
    printf("%d\n", numMaiores);

    return 0;
}