#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct incricao_s
{
    int id;
    double valor;
    char nome[10];
} incricao;


int comp_nome(const void *a, const void *b){
    incricao *a_insc = (incricao *) a;
    incricao *b_insc = (incricao *) b;
    return strcmp(a_insc->nome, b_insc->nome);
}

int main() {
    
    incricao lista [4] = {
        {333, 99.99, "Ana"},
        {222, 11.11, "Maria"},
        {111, 55.55, "Braga"},
        {444, 77.77, "Junior"}
    };

    qsort(lista, 4, sizeof(incricao), comp_nome);

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", lista[i].nome);
    }
    

    return 0;
}