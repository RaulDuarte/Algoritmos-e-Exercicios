#include "stdio.h"

int main(){

    int n, r, i, V[100];

    r = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &V[i]);
    }

    for (i = 0; i < n; i++)
    {
        r = r + V[i];
    }
    
    printf("%d", r);

    return 0;
}
