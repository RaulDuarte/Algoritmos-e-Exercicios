#include <stdlib.h>
#include <stdio.h>

void imprime (int vetor[1000], int i, int n){

    if(i>=n){
        printf("\n");
    }else{
        printf("%d ",vetor[n-1-i]);
        imprime(vetor, i+1, n);
    }

}

int main(int argc, char const *argv[])
{
    int n, i, vetor[1000];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &vetor[i]);
    }
    imprime (vetor, 0, n);
    return 0;
}
