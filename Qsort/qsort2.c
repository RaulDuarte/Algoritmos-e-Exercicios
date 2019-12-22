#include <stdio.h>
#include <stdlib.h>

int comp1(const void *a, const void *b){
    int *a_int = (int *)a;
    int *b_int = (int *)b;
    return *b_int - *a_int;
}

int main() {
    
    int vetor[] = {3, 8, 4, 9, 7};

    qsort(vetor+1, 3, sizeof(int), comp1);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}