#include <stdio.h>

int main() {

    int aves[100];
    int numAves;
    int valor, i;

    scanf("%d", &numAves);

    for (int i = 0; i < 100; i++)
    {
        aves[i] = 0;
    }
    
    for (i = 0; i < numAves; i++)
    {
        scanf("%d", &valor);
        aves[valor]++;
    }
    
    valor = 0;

    for (i = 0; i < 100; i++)
    {
        if(aves[i] > valor){
            valor = i;
        }
    }
    
    printf("%d\n", valor);

    return 0;
}