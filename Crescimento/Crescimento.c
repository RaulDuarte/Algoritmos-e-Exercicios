#include <stdlib.h>
#include <stdio.h>

int main() {

    double PopA, PopB, taxaPopA, taxaPopB;
    int indice, numTeste, anos;

    scanf("%d", &numTeste);
    

    for(indice = 0; indice < numTeste; indice++){
        scanf("%lf %lf %lf %lf", &PopA, &PopB, &taxaPopA, &taxaPopB);
        anos = 0;
        while(1){
            anos++;
            /*
            printf("Control 1 anos: %d\n", anos);
            printf("Control 1 PopA: %f\n", PopA);
            printf("Control 1 PopB: %f\n", PopB);
            printf("Control 1 taxaPopA: %f\n", taxaPopA);
            printf("Control 1 taxaPopB: %f\n", taxaPopB);
            getchar();getchar();
            */
            PopA = PopA + ((PopA/100)*taxaPopA);
            PopB = PopB + ((PopB/100)*taxaPopB);
            /*
            printf("Control 1 anos: %d\n", anos);
            printf("Control 1 PopA: %f\n", PopA);
            printf("Control 1 PopB: %f\n", PopB);
            printf("Control 1 taxaPopA: %f\n", taxaPopA);
            printf("Control 1 taxaPopB: %f\n", taxaPopB);
            getchar();getchar();
            */
            if(anos > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }else if(PopA > PopB){
                 printf("%d anos.\n", anos);
                 break;
            }
        }
    }

    return 0;
}