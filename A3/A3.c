#include <stdio.h>

int main() {

    int tamMatrizA, tamMatrizH, numLinha, numColuna;

    int matrizA[100][100];
    int matrizH[200][200];

    scanf("%d", &tamMatrizA);

    tamMatrizH = tamMatrizA+tamMatrizA;

    for(numLinha=0; numLinha<tamMatrizA; numLinha++){
        for(numColuna=0; numColuna<tamMatrizA; numColuna++){
            scanf("%d", &matrizA[numLinha][numColuna]);
        }
    }

    for(numLinha=0; numLinha<tamMatrizA; numLinha++){
        for(numColuna=0; numColuna<tamMatrizA; numColuna++){
            matrizH[numLinha][numColuna] = (matrizA[numLinha][numColuna] * (-1));
        }
    }

    for(numLinha=tamMatrizA; numLinha<tamMatrizH; numLinha++){
        for(numColuna=tamMatrizA; numColuna<tamMatrizH; numColuna++){
            matrizH[numLinha][numColuna] = matrizA[numLinha-tamMatrizA][numColuna-tamMatrizA];
        }
    }

    for(numLinha=0; numLinha<tamMatrizA; numLinha++){
        for(numColuna=tamMatrizA; numColuna<tamMatrizH; numColuna++){
            matrizH[numLinha][numColuna] = 1;
        }
    }

    for(numLinha=tamMatrizA; numLinha<tamMatrizH; numLinha++){
        for(numColuna=0; numColuna<tamMatrizA; numColuna++){
            if((numLinha + numColuna) == (tamMatrizH-1)){
                matrizH[numLinha][numColuna] = 0;
            }else
            {
                matrizH[numLinha][numColuna] = 1;
            }
        }
    }

    for(numLinha=0; numLinha<tamMatrizH; numLinha++){
        for(numColuna=0; numColuna<tamMatrizH; numColuna++){
            if(numColuna == tamMatrizH-1){
                printf("%d", matrizH[numLinha][numColuna]);
            }else{
                printf("%d ", matrizH[numLinha][numColuna]);
            }
        }
        printf("\n");
    }

    return 0;
}