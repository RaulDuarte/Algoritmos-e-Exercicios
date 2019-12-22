#include <stdio.h>

#define dia 86400
#define hora 3600
#define minuto 60

int main()
{
    int horas, minutos, segundos, entrada;

    horas = 0;
    minutos = 0;
    segundos = 0;

    scanf("%d", &entrada);

    if(entrada >= hora){
        horas =  entrada/hora;
        entrada = entrada % hora;
    }
    if(entrada >= minuto){
        minutos = entrada/minuto;
        entrada = entrada%minuto;
    }

    segundos =  entrada;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
