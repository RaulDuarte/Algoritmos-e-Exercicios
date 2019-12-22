#include <stdio.h>
#include <stdlib.h>

void valida(int *n){
    int temp, somatorio;

    temp = *n;
    somatorio = 0;

    while(temp > 0){
        somatorio = (somatorio + (temp%10));
        temp = temp/10;
    }

    *n = somatorio;
}

int *constroi(int n, int q, int m){
    int i;
    int *ptr = malloc(sizeof(int)*m);

    for (i = 0; i < m; i++)
    {
        ptr[i] = (n + (i*q));
    }

    return ptr;
}

int main() {

    int n, q, m, i;
    int *ptr;

    scanf("%d %d %d", &n, &q, &m);

    valida(&n);

    ptr = constroi(n, q, m);

    for (i = 0; i < m; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}