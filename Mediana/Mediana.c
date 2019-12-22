#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numTestes, tamVetor;
    float *vetor,temp;

    scanf("%d",&numTestes);

    while(numTestes){
        numTestes--;

        scanf("%d",&tamVetor);
        vetor = (float*)malloc(sizeof(float)*tamVetor);

        for (int i = 0; i < tamVetor; i++)
        {
            scanf("%f",&vetor[i]);
        }
        
        for (int i = 0; i < tamVetor; i++)
        {
            for (int i = 0; i < tamVetor-1; i++)
            {
                if(vetor[i]>vetor[i+1]){
                    temp=vetor[i];
                    vetor[i]=vetor[i+1];
                    vetor[i+1]=temp;
                }
            }
        }

        printf("%.2f\n",vetor[tamVetor/2]);

        free(vetor);
    }

    return 0;
}

