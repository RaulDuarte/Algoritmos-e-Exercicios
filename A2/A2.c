#include <stdio.h>
#include <stdlib.h>

int main() {

    int valores[110];
    int numEntrada, i, valor;

    for (i = 0; i < 100; i++)
    {
        valores[i]=0;
    }
    
    scanf("%d", &numEntrada);

    for (i = 0; i < numEntrada; i++)
    {
        scanf("%d", &valor);
        valores[valor]++;
    }

    valor = 0;
    for (i = 0; i <= 100; i++)
    {
        if (valores[i] > 0)
        {
            valor++;
        }
    }

    printf("%d\n", valor);

    return 0;
}