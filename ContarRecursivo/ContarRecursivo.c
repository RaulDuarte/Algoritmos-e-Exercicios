#include <stdlib.h>
#include <stdio.h>

int contar (int vetor[1000], int n, int x){
    
    if(n==0){
        return 0;
    }else{
        if(vetor[n-1]>=x){
            return 1+contar(vetor,n-1,x);
        }else{
            return contar(vetor,n-1,x);
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, i, vetor[1000], x;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &vetor[i]);
    }
    scanf ("%d", &x);
    printf ("%d\n", contar (vetor, n, x));
    return 0;
}
