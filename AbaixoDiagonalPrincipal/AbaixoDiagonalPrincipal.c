#include <stdio.h>

int main() {
 
    char somaOuMedia;
    int linha, coluna, elem;
    float resulSomaMult, dimensao;
    int matriz[100][100];

    scanf("%s", &somaOuMedia);
    scanf("%f", &dimensao);

    
    for(linha = 0; linha < dimensao; linha++){
        for(coluna = 0; coluna < dimensao; coluna++){
            scanf("%d",&matriz[linha][coluna]); 
        }
    }

    resulSomaMult = 0;
    elem = 0;

    if(somaOuMedia == 'S'){
        for(linha = 0; linha < dimensao; linha++){
            for(coluna = 0; coluna < linha; coluna++){
                resulSomaMult = resulSomaMult + matriz[linha][coluna]; 
            }
        }
        printf("%0.1f\n", resulSomaMult);
        return 0;
    }else if( somaOuMedia == 'M'){
        for(linha = 0; linha < dimensao; linha++){
            for(coluna = 0; coluna < linha; coluna++){
                resulSomaMult = resulSomaMult + matriz[linha][coluna]; 
                elem++;
            }
        }
        resulSomaMult = resulSomaMult/elem;
        printf("%0.1f\n", resulSomaMult);
        return 0;
    }

    return 0;
}