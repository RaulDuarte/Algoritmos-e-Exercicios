#include <stdio.h>

int main() {

    int valorPos[100];
    int valorNeg[100];

    int valor, numValorPos, numValorNeg, numValores, indice;
    float mediaPos, mediaNeg;

    numValorPos = 0;
    numValorNeg = 0;

    scanf("%d", &numValores);

    for (indice = 0; indice < numValores; indice++)
    {
        scanf("%d", &valor);
        if(valor >= 0){
            numValorPos++;
            valorPos[numValorPos-1] = valor;
        }else{
            numValorNeg++;
            valorNeg[numValorNeg-1] = valor;
        }
    }

    for (indice = 0; indice < numValorPos; indice++)
    {
        mediaPos = mediaPos + valorPos[indice];
    }

    mediaPos = mediaPos/numValorPos;

    for (indice = 0; indice < numValorNeg; indice++)
    {
        mediaNeg = mediaNeg + valorNeg[indice];
    }
    
    mediaNeg = mediaNeg/numValorNeg;

    printf("%0.4f %0.4f\n", mediaNeg, mediaPos);

    return 0;
}