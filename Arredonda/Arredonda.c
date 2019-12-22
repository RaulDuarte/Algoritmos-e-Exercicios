#include <stdio.h>
#include <stdlib.h>

void arredonda(int *v, int inicio, int fim){

    for (int i = inicio; i < fim; i++)
    {
        while((v[i]%10)!=0){
            v[i]++;
        }
    }
}


int main(int argc, char const *argv[])
{
    int inicio , fim, i;
    int v[20];
    scanf("%d %d", &inicio, &fim);
    for (i=0; i<20; i++) {
        scanf("%d", &v[i]);
    }
    arredonda(v, inicio, fim);
    for(i=0; i<19; i++) {
        printf("%d ", v[i]);
    }
    printf("%d\n", v[19]);

    return 0;
}
