#include <stdio.h>
#include <stdlib.h>

int * combina(int *vetor1, int *vetor2, int tamVetor1, int tamVetor2){

    int *temp = (int*)malloc(sizeof(int)*(tamVetor1+tamVetor2));

    for (int i = 0; i < tamVetor1; i++)
    {
        temp[i]=vetor1[i];
    }
    for (int i = 0; i < tamVetor2; i++)
    {
        temp[tamVetor1+i]=vetor2[tamVetor2-1-i];
    }

    return temp;
}

int main(int argc, char const *argv[])
{
    int *vetor1, *vetor2, tamVetor1, tamVetor2, *vetorFinal;

    scanf("%d %d", &tamVetor1, &tamVetor2);

    vetor1 = (int*)malloc(sizeof(int)*tamVetor1);
    vetor2 = (int*)malloc(sizeof(int)*tamVetor2);
    vetorFinal = (int*)malloc(sizeof(int)*(tamVetor1+tamVetor2));

    for (int i = 0; i < tamVetor1; i++)
    {
            scanf("%d",&vetor1[i]);
    }
    for (int i = 0; i < tamVetor2; i++)
    {
        scanf("%d", &vetor2[i]);
    }

    vetorFinal = combina(vetor1, vetor2, tamVetor1, tamVetor2);

    for (int i = 0; i < (tamVetor1+tamVetor2)-1; i++)
    {
        printf("%d ",vetorFinal[i]);
    }
    printf("%d\n",vetorFinal[(tamVetor1+tamVetor2)-1]);
    
    free(vetor1);
    free(vetor2);
    free(vetorFinal);

    return 0;
}
