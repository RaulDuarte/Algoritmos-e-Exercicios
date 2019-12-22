#include <stdio.h>

int main() {

    int numValores, indice, indice2, valor;
    int valores[100];
    
    scanf("%d", &numValores);

    for (indice = 0; indice < numValores; indice++)
    {
        scanf("%d", &valores[indice]);
    }

    while(scanf("%d", &valor) != EOF){
        for (indice = 0; indice < numValores; indice++)
        {
                if(valor == valores[indice]){
                    printf("SIM\n");
                    break;
                }else if(valor != valores[indice] && indice == numValores-1){
                    printf("CHAVE NAO ENCONTRADA\n");
                }
        }
    }
    return 0;
}