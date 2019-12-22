#include "stdio.h"

void main()
{
    char nome[10];
    int anoNasc, anoAtual, idade;

    scanf("%d", &anoAtual);
    scanf("%s", nome);
    scanf("%d", &anoNasc);

    idade = anoAtual-anoNasc;

    printf("%s, voce completa %d anos de idade neste ano.\n", nome, idade);
}
