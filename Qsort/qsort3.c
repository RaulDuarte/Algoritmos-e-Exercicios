#include <stdio.h>
#include <stdlib.h>

typedef struct incricao_s
{
    int id;
    double valor;
    char nome[10];
} incricao;


int comp_v(const void *a, const void *b){
    incricao *a_insc = (incricao *) a;
    incricao *b_insc = (incricao *) b;
    return a_insc->valor - b_insc->valor;
}

int main() {
    
    incricao lista [4] = {
        {333, 99.99, "Ana"},
        {222, 11.11, "Maria"},
        {111, 55.55, "Braga"},
        {444, 77.77, "Junior"}
    };

    qsort(lista, 4, sizeof(incricao), comp_v);

    for (int i = 0; i < 4; i++)
    {
        printf("%lf\n", lista[i].valor);
    }
    

    return 0;
}