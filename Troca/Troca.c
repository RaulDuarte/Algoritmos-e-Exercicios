#include "stdio.h"

void troca(int *x, int *y){

    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;
    int n;
    scanf("%d", &n);
    while(n) { //pergunta: por que isto funciona?
        n--;
        scanf("%d %d", &x, &y);
        troca(&x, &y);
        printf("%d %d\n", x, y);
    }
    return 0;
}